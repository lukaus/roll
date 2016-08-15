CC = g++
OBJS = roll.cpp
EXEC = roll
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

pepe: $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

install:
	cp $(EXEC) $(BINDIR)

clean:
rm $(EXEC)