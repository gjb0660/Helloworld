all:
static:swap.o libswap.a
	gcc sample_helloworld.c -o helloswap -I./include/ -lswap -L./lib/

swap.o:
	cd sources ;\
	gcc -c swap.c 

libswap.a:swap.o
	ar rcs ./lib/libswap.a ./sources/swap.o 
