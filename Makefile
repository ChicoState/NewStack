CXXFLAGS = -std=c++11

all: main.o
	g++ -std=c++11 -o a.out main.o

main.o: main.cpp Stack_Node.h StackWrapper.h
	g++ -std=c++11 -c main.cpp


clean:
	rm -f *.o *.h.gch
