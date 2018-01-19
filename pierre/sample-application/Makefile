CC=x86_64-hermit-gcc
SRC=hello.c
PROG=hello
CFLAGS= -g
LDFLAGS=
PROXY=/opt/hermit/bin/proxy

all: $(PROG)
	$(CC) $(CFLAGS) $(SRC) -o $(PROG) $(LDFLAGS)

test: all
	HERMIT_ISLE=qemu HERMIT_KVM=0 $(PROXY) $(PROG)

debug: all
	HERMIT_ISLE=qemu HERMIT_KVM=0 HERMIT_DEBUG=1 $(PROXY) $(PROG)

clean:
	rm -rf $(PROG) *.o	
