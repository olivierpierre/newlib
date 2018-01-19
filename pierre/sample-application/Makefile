CC=x86_64-hermit-gcc
SRC=hello.c
PROG=hello
CFLAGS= -g
LDFLAGS=
PROXY=/opt/hermit/bin/proxy
MEM=4G
VERBOSE=1

all: $(PROG)
	$(CC) $(CFLAGS) $(SRC) -o $(PROG) $(LDFLAGS)

test: all
	HERMIT_MEM=$(MEM) HERMIT_VERBOSE=$(VERBOSE) HERMIT_ISLE=qemu HERMIT_KVM=0 $(PROXY) $(PROG)

debug: all
	HHERMIT_MEM=$(MEM) HERMIT_VERBOSE=$(VERBOSE) ERMIT_ISLE=qemu HERMIT_KVM=0 HERMIT_DEBUG=1 $(PROXY) $(PROG)

objdump:
	objdump --disassemble $(PROG) /tmp/obj.x | vim -
