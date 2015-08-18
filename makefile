CXX = clang++
CFLAGS = -g -Wall -std=c++11
OBJ = suitors.o list.o
EXE = suitors

all: $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(EXE)

.cpp.o:
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(EXE)
