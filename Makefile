all:

Object: src/Object.cpp
	g++ -c src/Object.cpp -I"C:\SFML\include" -o bin/Object.o

Test: test/test.cpp
	g++ -c test/test.cpp -I"C:\SFML\include" -o test/test.o
	g++ test/test.o bin/Object.o -o test/test.exe -L"C:\SFML\lib" -lsfml-graphics -lsfml-window -lsfml-system