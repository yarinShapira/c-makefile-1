CC=gcc
AR=ar
FLAGS= -Wall -g


all: mains maind

mymaths: power.o basicMath.o
	$(AR) -rcs -o libmyMath.a power.o basicMath.o

mymathd: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o

mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

.PHONY: clean all

clean:
	rm -f *.o *.a *.so maind mains