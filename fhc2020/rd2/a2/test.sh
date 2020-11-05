g++ -O2 -march=znver2 CDF_template.cpp
./a.out < test > test_output
./a.out < perimetric_chapter_1_validation_input.txt > validation_output
./a.out < perimetric_chapter_1_input.txt > output
rm a.out
