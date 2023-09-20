task2: prepareAndRunDinamlib 
	gcc main.c -l convert -Wall -o main

prepareAndRunDinamlib: libconver.so
	cp libconver.so /usr/lib
	chmod 0755 /usr/lib/libconver.so
	ldconfig

libconver.so: low.o uper.o
	gcc -shared -o libconver.so low.o uper.o

low.o: low.c text.h
	gcc -Wall -Werror -Wextra -fpic -c low.c 

uper.o: uper.c text.h
	gcc -Wall -Werror -Wextra -fpic -c uper.c 

clean: 
	rm -rf main *.o *.a *.gch