sfmlincludepath = "C:\SFML\include"
sfmllibpath = "C:\SFML\lib"
libcompile = -lsfml-graphics -lsfml-window -lsfml-system

deafult:

Object: src/Object.cpp
	g++ -c src/Object.cpp -I${sfmlincludepath} -o bin/Object.o

Test: test/test.cpp
	g++ -c test/test.cpp -I${sfmlincludepath} -o test/test.o
	g++ test/test.o bin/Object.o -o test/test.exe -L${sfmllibpath} ${libcompile}