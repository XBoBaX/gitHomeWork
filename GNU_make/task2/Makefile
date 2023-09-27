sources = main

.PHONY: all
all: Program

Program: prepare src1.o src2.o test3.o
	gcc -Wall -o Program *.o

# export demoVar=<num>
# demoVar 1 = make with include
# demoVar 2 = make with -f 
prepare: main.o
 ifeq (${demoVar}, 1)
	make -f make1.mk
	make -f make2.mk
	make -f make3.mk
 else
	-include make1.mk make2.mk make3.mk
 endif
	

# include make1.mk
# include make2.mk
# include make3.mk

main.o:
	gcc -Wall -c main.c

# Remove object files and executible file
clean:
	rm *.o Program