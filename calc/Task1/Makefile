task1: ranlib_libcal.a 
	gcc main.c -L . -l cal -o main

ranlib_libcal.a: libcal.a
	ranlib libcal.a	

add.o: add.c calc.h
	gcc -Wall -Werror -Wextra -c add.c 

minus.o: minus.c calc.h
	gcc -Wall -Werror -Wextra -c minus.c 

factorial.o: factorial.c calc.h
	gcc -Wall -Werror -Wextra -c factorial.c 

fraction.o: fraction.c calc.h
	gcc -Wall -Werror -Wextra -c fraction.c 

product.o: product.c calc.h
	gcc -Wall -Werror -Wextra -c product.c 

sqr.o: sqr.c calc.h
	gcc -Wall -Werror -Wextra -c sqr.c 

libcal.a: add.o minus.o factorial.o fraction.o product.o sqr.o
	ar -rc libcal.a *.o

clean: 
	rm -rf main *.o *.a *.gch