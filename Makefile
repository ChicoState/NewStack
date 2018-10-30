CXX = g++
CXXFLAGS = -Wall
EXE = newStack
OBJECTS = newStack.o

all: $(EXE)

newStack: NewStack.cpp NewStack.h
	$(CXX) $(CXXFLAGS) NewStack.cpp -o newStack

clean:
	rm -f $(EXE)

