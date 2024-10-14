#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/panner
  codesign --force --verbose --sign - /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/panner.vst3
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin
  /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/moduleinfotool -create -version 3.7.11.0 -path /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/panner.vst3 -output /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/panner.vst3/Contents/Resources/moduleinfo.json
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin
  codesign -f -s - -v /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/panner.vst3/Contents/Resources/moduleinfo.json
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin
  /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/validator /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/panner.vst3 
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/panner
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Library/Audio/Plug-Ins/VST3
  ln -svfF /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/panner.vst3 /Users/noahlynaugh/Library/Audio/Plug-Ins/VST3
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/panner
  codesign --force --verbose --sign - /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/panner.vst3
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin
  /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/moduleinfotool -create -version 3.7.11.0 -path /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/panner.vst3 -output /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/panner.vst3/Contents/Resources/moduleinfo.json
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin
  codesign -f -s - -v /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/panner.vst3/Contents/Resources/moduleinfo.json
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin
  /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/validator  /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/panner.vst3
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/panner
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Library/Audio/Plug-Ins/VST3
  ln -svfF /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/panner.vst3 /Users/noahlynaugh/Library/Audio/Plug-Ins/VST3
fi

