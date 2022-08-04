#include "displayapp/screens/WaterLockConfirmation.h"

#include "displayapp/DisplayApp.h"

using namespace Pinetime::Applications::Screens;

namespace {
  void ButtonEventHandler(lv_obj_t* obj, lv_event_t event) {
    static_cast<WaterLockConfirmation*>(obj->user_data)->OnButtonEvent(obj, event);
  }
}

WaterLockConfirmation::WaterLockConfirmation(Pinetime::Applications::DisplayApp* app,
                                             Controllers::Settings& settingsController,
                                             Drivers::Cst816S& touchPanel)
  : Screen(app), settingsController {settingsController}, touchPanel {touchPanel} {
  label = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_recolor(label, true);
  lv_label_set_text_static(label, "\n#FFFF00 Enable water lock?#\n\n#808080 Press and hold#\n#808080 button to disable.#");
  lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);
  lv_obj_align(label, lv_scr_act(), LV_ALIGN_IN_TOP_MID, 0, 0);

  btnEnable = lv_btn_create(lv_scr_act(), nullptr);
  btnEnable->user_data = this;
  lv_obj_set_event_cb(btnEnable, ButtonEventHandler);
  lv_obj_set_size(btnEnable, 115, 50);
  lv_obj_align(btnEnable, lv_scr_act(), LV_ALIGN_IN_BOTTOM_MID, 0, 0);
  txtEnable = lv_label_create(btnEnable, nullptr);
  lv_label_set_text_static(txtEnable, "Enable");
}

WaterLockConfirmation::~WaterLockConfirmation() {
  lv_obj_clean(lv_scr_act());
}

void WaterLockConfirmation::OnButtonEvent(lv_obj_t* obj, lv_event_t event) {
  if (event != LV_EVENT_CLICKED) {
    return;
  }

  if (obj == btnEnable) {
    settingsController.SetWaterLockStatus(Controllers::Settings::WaterLock::On);
    touchPanel.Sleep();
    app->StartApp(Apps::Clock, DisplayApp::FullRefreshDirections::LeftAnim);
  }
}
