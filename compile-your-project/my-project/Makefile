CC = gcc
CFLAGS = -Wall -Werror -Wpedantic -std=c99
LDFLAGS = -lm -L. -lnums

.PHONY: all clean

all: my_app

libnums.a: nums/discr.c nums/root.c
	$(CC) $(CFLAGS) -c nums/root.c
	$(CC) $(CFLAGS) -c nums/discr.c
	ar cru libnums.a root.o discr.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

my_app: main.o libnums.a
	$(CC) -o my_app main.o $(LDFLAGS)

clean:
	rm -rf *.o
	rm -rf libnums.a
	rm -rf my_app