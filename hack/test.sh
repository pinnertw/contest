#!/bin/bash
CONTEST="temp"
# C++ to hack
g++ -O2 Q$1.cpp 
/usr/bin/time -f "HACKING C++\tMAX memory=%M elapsed=%E cpu.sys=%S .user=%U" ./a.out < test$1 > out1
# python to hack
/usr/bin/time -f "HACKING Python\tMAX memory=%M elapsed=%E cpu.sys=%S .user=%U" python Q$1.py < test$1 > out2
# Personnel answer
g++ -O2 ../$CONTEST/Q$1.cpp
/usr/bin/time -f "PERSO C++\tMAX memory=%M elapsed=%E cpu.sys=%S .user=%U" ./a.out < test$1 > out3

python check.py
