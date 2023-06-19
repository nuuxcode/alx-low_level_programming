#!/bin/bash
curl -o /tmp/random.so https://raw.githubusercontent.com/nuuxcode/alx-low_level_programming/4d14befd931c55f3c9b867a7db09b52605c656b8/0x18-dynamic_libraries/random.so
export LD_PRELOAD="/tmp/random.so"
