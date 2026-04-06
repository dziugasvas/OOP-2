all: create

create:
	g++ -std=c++17 main.cpp funkcijos.cpp -o programa

O1:
	g++ -std=c++17 -O1 main.cpp funkcijos.cpp -o programa
	./programa

O2:
	g++ -std=c++17 -O2 main.cpp funkcijos.cpp -o programa
	./programa

O3:
	g++ -std=c++17 -O3 main.cpp funkcijos.cpp -o programa
	./programa

run: create
	./programa

clean:
	rm -f programa