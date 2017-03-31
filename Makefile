all: main.cpp
	$(CXX) --std=c++1z main.cpp -o main

test: main.cpp
	$(CXX) --std=c++1z main.cpp -DTEST -o test
	./test

clean:
	rm main test
