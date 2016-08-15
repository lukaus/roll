CC = g++
OBJS = rolladd.cpp
EXEC = roll
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

p1: $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

install:
	cp $(EXEC) $(BINDIR)

clean:
	rm $(EXEC)