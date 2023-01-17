all: src/telnet-gdb.c
	gcc src/telnet-gdb.c -ltelnet -o telnet-gdb
gdb: src/telnet-gdb.c materials/libtelnet.c
	gcc src/telnet-gdb.c materials/libtelnet.c -g -o a.out
.PHONY:
	all, gdb