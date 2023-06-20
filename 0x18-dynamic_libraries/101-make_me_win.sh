#!/bin/bash
wget -N -P /tmp https://raw.githubusercontent.com/nuuxcode/alx-low_level_programming/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD="/tmp/random.so"
