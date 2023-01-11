all: telnet-chatd.c
	gcc telnet-chatd.c -ltelnet -o telnet-chatd