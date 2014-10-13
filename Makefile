all:
	clang++ -std=c++11 -stdlib=libc++ -o fun fun.cpp
	./fun
	python fun.py
