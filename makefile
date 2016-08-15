CC = g++
OBJS = rolladd.cpp
EXEC = roll
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

roll: $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

install:
	cp $(EXEC) $(BINDIR)

clean:
	rm $(EXEC)
