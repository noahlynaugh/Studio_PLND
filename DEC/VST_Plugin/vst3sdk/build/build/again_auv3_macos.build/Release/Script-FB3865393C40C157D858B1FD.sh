#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/again_auv3
  rm -Rf /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/AGain\ AUV3\ macOS.app/Contents/PlugIns/auv3.appex
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/AGain\ AUV3\ macOS.app/Contents/PlugIns/auv3.appex
  /bin/cp -a -v /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/again_auv3_macos_appextension_macos.appex/ /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/AGain\ AUV3\ macOS.app/Contents/PlugIns/auv3.appex/
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/again_auv3
  rm -Rf /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/AGain\ AUV3\ macOS.app/Contents/PlugIns/auv3.appex
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/AGain\ AUV3\ macOS.app/Contents/PlugIns/auv3.appex
  /bin/cp -a -v /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/again_auv3_macos_appextension_macos.appex/ /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/AGain\ AUV3\ macOS.app/Contents/PlugIns/auv3.appex/
fi

