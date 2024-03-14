# Makefile to compile the application testPoint

all: readNuclei

Nucleus.o : Nucleus.cxx Nucleus.h
	g++ -std=c++11 -Wall -c Nucleus.cxx
	
readNuclei.o : readNuclei.cxx	Nucleus.h
	g++ -std=c++11 -Wall -c readNuclei.cxx
	
readNuclei : Nucleus.o readNuclei.o 
	g++ -std=c++11 -Wall -o readNuclei Nucleus.o readNuclei.o 

clean:  
	rm *.o

clean_all:  
	rm *.o readNuclei