# Makefile wit auto variables 
all: Program

Program: src1.o src2.o src3.o main.o
	gcc -Wall $^ -o $@ 

# Build object file without additional parameters,
# because we're need to ignore a misstakes.
main.o:
	gcc -Wall -c $<

src1.o:
	make -f make1.mk

src2.o:
	make -f make2.mk

src3.o:
	make -f make3.mk

# Remove object files and executible file
clean:
	rm *.o $@