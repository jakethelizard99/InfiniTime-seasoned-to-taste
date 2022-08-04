#pragma once

#include "components/settings/Settings.h"
#include "displayapp/screens/Screen.h"
#include "drivers/Cst816s.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class WaterLockConfirmation : public Screen {
      public:
        WaterLockConfirmation(DisplayApp* app, Controllers::Settings& settingsController, Drivers::Cst816S& touchPanel);
        ~WaterLockConfirmation() override;

        void OnButtonEvent(lv_obj_t* obj, lv_event_t event);

      private:
        lv_obj_t* label;
        lv_obj_t* btnEnable;
        lv_obj_t* txtEnable;

        Controllers::Settings& settingsController;
        Drivers::Cst816S& touchPanel;
      };
    }
  }
}
