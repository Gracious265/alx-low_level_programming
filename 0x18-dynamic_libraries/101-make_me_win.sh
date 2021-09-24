#!/bin/bash
wget -P /tmp https://github.com/Kevv-commits/alx-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD=/tmp/100-operations.so
