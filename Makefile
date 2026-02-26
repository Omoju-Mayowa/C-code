CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = $(wildcard *.c)
OUT = build

all: $(SRC)
	mkdir -p $(OUT)
	for file in $(SRC); do \
		S(CC) $(CFLAGS) $$file -o $(OUT)/$$(basename $$file .c);
	done

clean: 
	rm -rf $(OUT)