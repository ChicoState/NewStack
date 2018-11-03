CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -W -Werror -pedantic

main: main.o newstack.o
	$(CXX) -o  main.o newstack.o -o rr

main.o: main.cpp newstack.h
	$(CXX) $(CXXFLAGS) main.cpp

newstack.o: newstack.cpp newstack.h
	$(CXX) $(CXXFLAGS) newstack.cpp

clean:
	rm -f *.o main