#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst-hosting/validator
  codesign --force --verbose --sign - /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/validator
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst-hosting/validator
  /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Debug/validator -selftest
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst-hosting/validator
  codesign --force --verbose --sign - /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/validator
  cd /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/public.sdk/samples/vst-hosting/validator
  /Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/build/bin/Release/validator -selftest
fi

