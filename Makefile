CC = gcc
CFLAGS = -Wall

all: clear_term rm_estados_txt main execute

clear_term:
	clear

rm_estados_txt:
	rm estados.txt

main: main.c
	$(CC) $(CFLAGS) main.c Estados.c -o main

execute:
	./main
