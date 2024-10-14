#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/again_auv3
  rm -Rf /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/again_auv3_macos_appextension_macos.appex/Contents/PlugIns/plugin.vst3
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/again_auv3_macos_appextension_macos.appex/Contents/PlugIns/plugin.vst3
  /bin/cp -a -v /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/again.vst3/ /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/again_auv3_macos_appextension_macos.appex/Contents/PlugIns/plugin.vst3/
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/again_auv3
  rm -Rf /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/again_auv3_macos_appextension_macos.appex/Contents/PlugIns/plugin.vst3
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/again_auv3_macos_appextension_macos.appex/Contents/PlugIns/plugin.vst3
  /bin/cp -a -v /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/again.vst3/ /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/again_auv3_macos_appextension_macos.appex/Contents/PlugIns/plugin.vst3/
fi

