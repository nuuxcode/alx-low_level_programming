#!/bin/bash
wget -N -P /tmp https://raw.githubusercontent.com/nuuxcode/alx-low_level_programming/master/0x18-dynamic_libraries/randomx.so
export LD_PRELOAD="/tmp/randomx.so"
