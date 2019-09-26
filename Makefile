CFLAGS=-Wall
CXX=g++ -g -c $(CFLAGS)
LD=g++ -g -o

all: dab

main: main.o dab.o
	$(LD) $@ $^

main.o: main.cpp dab.h
	$(CXX) $<

dab.o: dab.cpp dab.h
	$(CXX) $<

clean:
	rm main *.o *.*~

