all: static dynamic
	echo finished
static: npfft.c npfft.h
	gcc npfft.c -c -o npfft.o
	ar rcs libnpfft.a npfft.o
dynamic: npfft.c npfft.h
	gcc -Wall -fPIC -c npfft.c -o npfft.o
	gcc -shared -o libnpfft.so npfft.o
exedynamic: dynamic
	gcc main.c npfft.h -L ./ -lnpfft -v
rundynamic: exedynamic
	LD_LIBRARY_PATH=./ ./main
exestatic: main.c npfft.h static
	gcc main.c libnpfft.a -o main
runstatic: exestatic
	./main
clean:
	if [ -f ./npfft ]; then rm ./npfft ; fi
	if [ -f ./main ]; then rm ./main ; fi
	if [ -f ./libnpfft.a ]; then rm ./libnpfft.a ; fi
	rm -r *.o