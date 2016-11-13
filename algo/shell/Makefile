main : main.o
	g++ -o main main.o ../tools/common.o -g

main.o : main.cpp
	g++ -std=c++11 -c main.cpp -g

.PHONY: clean
clean:
	rm main main.o 
