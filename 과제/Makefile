cc=g++
target=growable
objects=main.o Array.o GrowableArray.o

$(target):$(objects)
	    $(cc) -o $(target) $(objects)

main.o: main.cpp main.h
	$(cc) -c -o main.o -g main.cpp

Array.o: Array.cpp Array.h
	$(cc) -c -o Array.o -g Array.cpp

GrowableArray.o: GrowableArray.cpp GrowableArray.h
	$(cc) -c -o GrowableArray.o -g GrowableArray.cpp

.PHONY: clean

clean:
	rm $(target) $(objects)
