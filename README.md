# [InfiniTime](https://github.com/InfiniTimeOrg/InfiniTime)

[![Build PineTime Firmware](https://github.com/InfiniTimeOrg/InfiniTime/workflows/Build%20PineTime%20Firmware/badge.svg?branch=master)](https://github.com/InfiniTimeOrg/InfiniTime/actions)

![InfiniTime logo](images/infinitime-logo-small.jpg "InfiniTime Logo")


Fast open-source firmware for the [PineTime smartwatch](https://www.pine64.org/pinetime/) with many features, written in modern C++.

-----

### This Fork comes with various design and functional modifications  ###


<p float="left">
	<img src="https://user-images.githubusercontent.com/54219098/184215790-faa65165-49b2-4cf9-bbf2-74258f948ea9.png" width="250" />
	<img src="https://user-images.githubusercontent.com/54219098/184216721-d985b088-556a-4fa6-b83b-39a8d39971fb.png" width="250" />
	<img src="https://user-images.githubusercontent.com/54219098/182631252-78a7a2e8-2e81-4b8a-8023-9e99a3bd1534.png" width="250" />
	<img src="https://user-images.githubusercontent.com/54219098/182631362-7685901b-c475-4920-9a2e-4ba873bfdcf8.png" width="250" />
 <img src="https://user-images.githubusercontent.com/54219098/184218780-0264b8b1-f674-49f9-b3e9-378813fecc26.png" width="250" />
</p>


- Longer alarm timeout (3m) than default (60s) (#945 #1233)
- longer timer vibration (1000ms) than default (35ms) (#391)
- music app accessible by swipe-left on watchface
- music app opens with volume controls by default
- music app toggle volume/track buttons via long-tap instead of swipe-up-down 
- quick-settings can now be closed via swipe-down (#1249)
- flashlight on when starting app

- green text and elements, consistent with bootloader
- seconds shown on digital watchface
- battery % visible in statusbar
- charging plug symbol is now green
- battery symbol follows same color scheme than percentage
- darker notification background

The builds always include the most recent changes in upstream/develop.

**experimental/unstable!**


### Planned Features ###

- X/Y HRM graph
- dismiss/delete new notification by swiping


Lets find out together what else is possible, happy to accept pull requests with new ideas


-----

## New to InfiniTime?

 - [Getting started with InfiniTime](doc/gettingStarted/gettingStarted-1.0.md)
 - [Updating the software](doc/gettingStarted/updating-software.md)
 - [About the firmware and bootloader](doc/gettingStarted/about-software.md)

### Companion apps

 - [Gadgetbridge](https://gadgetbridge.org/) (Android)
 - [AmazFish](https://openrepos.net/content/piggz/amazfish/) (SailfishOS)
 - [Siglo](https://github.com/alexr4535/siglo) (Linux)
 - [InfiniLink](https://github.com/InfiniTimeOrg/InfiniLink) (iOS) **[Looking for a new maintainer]**
 - [ITD](https://gitea.arsenm.dev/Arsen6331/itd) (Linux)

## Development

 - [InfiniTime Vision](doc/InfiniTimeVision.md)
 - [Rough structure of the code](doc/code/Intro.md)
 - [How to implement an application](doc/code/Apps.md)
 - [Generate the fonts and symbols](src/displayapp/fonts/README.md)
 - [Tips on designing an app UI](doc/ui_guidelines.md)
 - [Bootloader, OTA and DFU](bootloader/README.md)
 - [Versioning](doc/versioning.md)
 - [Project branches](doc/branches.md)
 - [Files included in the release notes](doc/filesInReleaseNotes.md)

### Contributing

 - [How to contribute?](doc/contribute.md)
 - [Coding conventions](doc/coding-convention.md)

### Build, flash and debug

 - [InfiniTime simulator](https://github.com/InfiniTimeOrg/InfiniSim)
 - [Build the project](doc/buildAndProgram.md)
 - [Build the project with Docker](doc/buildWithDocker.md)
 - [Build the project with VSCode](doc/buildWithVScode.md)
 - [Flash the firmware using OpenOCD and STLinkV2](doc/openOCD.md)
 - [Flash the firmware using SWD interface](doc/SWD.md)
 - [Flash the firmware using JLink](doc/jlink.md)
 - [Flash the firmware using GDB](doc/gdb.md)
 - [Stub using NRF52-DK](doc/PinetimeStubWithNrf52DK.md)

### API

 - [BLE implementation and API](doc/ble.md)

### Architecture and technical topics

 - [Memory analysis](doc/MemoryAnalysis.md)

## Licenses

This project is released under the GNU General Public License version 3 or, at your option, any later version.

It integrates the following projects:
 - RTOS : **[FreeRTOS](https://freertos.org)** under the MIT license
 - UI : **[LittleVGL/LVGL](https://lvgl.io/)** under the MIT license
 - BLE stack : **[NimBLE](https://github.com/apache/mynewt-nimble)** under the Apache 2.0 license
 - Font : **[Jetbrains Mono](https://www.jetbrains.com/fr-fr/lp/mono/)** under the Apache 2.0 license

## Credits

I’m not working alone on this project. First, many people create PR for this projects. Then, there is the whole #pinetime community : a lot of people all around the world who are hacking, searching, experimenting and programming the Pinetime. We exchange our ideas, experiments and code in the chat rooms and forums.

Here are some people I would like to highlight:

 - [Atc1441](https://github.com/atc1441/) : He works on an Arduino based firmware for the Pinetime and many other smartwatches based on similar hardware. He was of great help when I was implementing support for the BMA421 motion sensor and I²C driver.
 - [Koen](https://github.com/bosmoment) : He’s working on a firmware based on RiotOS. He integrated similar libs as me : NimBLE, LittleVGL,… His help was invaluable too!
 - [Lup Yuen Lee](https://github.com/lupyuen) : He is everywhere: he works on a Rust firmware, builds a MCUBoot based bootloader for the Pinetime, designs a Flutter based companion app for smartphones and writes a lot of articles about the Pinetime!
