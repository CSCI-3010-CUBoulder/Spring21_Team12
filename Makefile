CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall

all: test

clean:
	rm test

test: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp  -o test


