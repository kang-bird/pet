all: telnet-gdb.c
	gcc telnet-gdb.c -ltelnet -o telnet-gdb