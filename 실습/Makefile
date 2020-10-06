cc=g++
target=stack
objects=main.o LinkedList.o Stack.o

$(target): $(objects) 
	     $(cc) -o $(target) $(objects)

main.o: main.cpp Stack.cpp
	$(cc) -c -o main.o -g main.cpp

LinkedList.o: LinkedList.cpp
	$(cc) -c -o LinkedList.o -g LinkedList.cpp

Stack.o: Stack.cpp LinkedList.cpp
	$(cc) -c -o Stack.o -g Stack.cpp

.PHONY: clean

clean:
	rm $(target) $(objects)
