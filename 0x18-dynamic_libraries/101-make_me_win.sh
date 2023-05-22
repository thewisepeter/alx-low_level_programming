#!/bin/bash
wget -P /media https://github.com/thewisepeter/alx-low_level_programming/raw/master/0x18-dynamic_libraries/sure_win.so
export LD_PRELOAD=/media/sure_win.so
