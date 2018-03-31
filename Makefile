CXXFLAGS = -std=c++11

all: main.o
	g++ -std=c++11 -o a.out wrapper_main.o

main.o: wrapper_main.cpp Stack.h StackWrapper.h
	g++ -std=c++11 -c wrapper_main.cpp


clean:
	rm -f *.o *.h.gch
