$CXX -g dumbfuzz.cc -fsanitize=fuzzer,address -o dumbfuzz
./dumbfuzz
boom
