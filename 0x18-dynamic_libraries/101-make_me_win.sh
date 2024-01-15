#!/bin/bash
curl -OL "https://github.com/sbe4658/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libdynamic.so"
export LD_PRELOAD=./libc.so.6
