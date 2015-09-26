all:
	clang++ -std=c++11 -stdlib=libc++ -o fun fun.cpp
	time ./fun
	time python fun.py
