CC=gcc
CFLAGS=-c -ggdb -O0 -std=c11 -Wall -Werror
SOURCES=main.c sort.c print.c find.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=main

.PHONY: all
all: main


$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ -lcs50

main.o: main.c
	$(CC) $(CFLAGS) main.c -lcs50

sort.o: sort.c
	$(CC) $(CFLAGS) sort.c -lcs50

print_array.o: print_array.c
	$(CC) $(CFLAGS) print_array.c -lcs50

find.o: find.c
	$(CC) $(CFLAGS) find.c -lcs50


clean:
	rm -f *.o $(EXECUTABLE)
