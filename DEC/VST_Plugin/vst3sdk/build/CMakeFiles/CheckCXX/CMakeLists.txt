cmake_minimum_required(VERSION 3.30.4)
set(CMAKE_MODULE_PATH "/Users/noahlynaugh/Desktop/Coding/Studio_PLND/Digital-Effect-Controller/DEC/VST_Plugin/vst3sdk/cmake/modules")
project(CheckCXX CXX)
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/result.cmake"
  "set(CMAKE_CXX_COMPILER \"${CMAKE_CXX_COMPILER}\")\n"
  
  )