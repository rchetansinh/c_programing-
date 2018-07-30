CC=gcc
CFLAGS=-I.
DEPS = make.h
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
hello:make_fun.c make_hello.c
	cc -o hello make_fun.c make_hello.c -I. 
