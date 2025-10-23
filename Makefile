CC       = clang
CFLAGS   = -Wall -g
CXX      = clang++
CXXFLAGS = -Wall -g
RM       = rm -f
TARGETS  = array list segfaults

all : $(TARGETS)
.PHONY : all

array : array.cpp
	$(CXX) $(CXXFLAGS) array.cpp -o array

list : list.cpp LinkedList.hpp
	$(CXX) $(CXXFLAGS) list.cpp -o list

segfaults : segfaults.c
	$(CC) $(CFLAGS) segfaults.c -o segfaults

clean :
	$(RM) $(TARGETS)
.PHONY : clean
