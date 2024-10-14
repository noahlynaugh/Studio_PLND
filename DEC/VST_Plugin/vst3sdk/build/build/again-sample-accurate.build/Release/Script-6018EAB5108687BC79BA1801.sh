#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/again_sampleaccurate
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Debug/again-sample-accurate.vst3/Contents/Resources
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst/again_sampleaccurate
  /Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/VST3/Release/again-sample-accurate.vst3/Contents/Resources
fi

