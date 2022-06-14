#!/bin/bash
wget -P ./test/ https://github.com/OluwamayowaMusa/alx-low_level_programming/raw/master/0x18-dynamic_libraries/injection.so
export LD_PRELOAD=./test/injection.so
