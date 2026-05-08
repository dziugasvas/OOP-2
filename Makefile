all: create

create:
	g++ -std=c++17 -Iinclude src/main.cpp src/funkcijos.cpp tests/testas.cpp -o programa

O1:
	g++ -std=c++17 -O1 src/main.cpp src/funkcijos.cpp tests/testas.cpp -o programa
	./programa

O2:
	g++ -std=c++17 -O2 src/main.cpp src/funkcijos.cpp tests/testas.cpp -o programa
	./programa

O3:
	g++ -std=c++17 -O3 src/main.cpp src/funkcijos.cpp tests/testas.cpp -o programa
	./programa

run: create
	./programa
	
clean:
	rm -f programa