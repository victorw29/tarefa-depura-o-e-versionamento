all: compile

CC = gcc
SOURCES = ./*.c

.PHONY: clean

clean:
	rm -f conversor

compile:
	$(CC) $(SOURCES) -o conversor
