#!/bin/bash
CONTEST="temp"
g++ -O2 Q$1.cpp 
/usr/bin/time -f "HACKING C++\tMAX memory=%M elapsed=%E cpu.sys=%S .user=%U" ./a.out < test$1 > out1
/usr/bin/time -f "HACKING Python\tMAX memory=%M elapsed=%E cpu.sys=%S .user=%U" python Q$1.py < test$1 > out3
g++ -O2 ../$CONTEST/Q$1.cpp -o ../$CONTEST/a.out
/usr/bin/time -f "PERSO C++\tMAX memory=%M elapsed=%E cpu.sys=%S .user=%U" ../$CONTEST/a.out < test$1 > out2
