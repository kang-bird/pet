all: src/telnet-gdb.c
	gcc src/telnet-gdb.c -ltelnet -lpthread -o telnet-gdb

gdb: src/telnet-gdb.c materials/libtelnet.c
	gcc src/telnet-gdb.c materials/libtelnet.c -g -lpthread -o a.out
clean:
	rm -f a.out telnet-gdb
.PHONY:
	all, gdb, clean