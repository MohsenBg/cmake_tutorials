calculator: main.o addition.o division.o print_result.o
	g++ ./build/main.o ./build/addition.o ./build/division.o ./build/print_result.o -o calculator

main.o: main.cpp
		g++ -c main.cpp -o ./build/main.o

addition.o: ./src/addition.cpp
		g++ -c ./src/addition.cpp -o ./build/addition.o

division.o: ./src/division.cpp
		g++ -c ./src/division.cpp -o ./build/division.o

print_result.o: ./src/print_result.cpp 
		g++ -c ./src/print_result.cpp -o ./build/print_result.o
