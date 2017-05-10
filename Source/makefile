main.o: main.cpp
	g++ -g -c main.cpp
Game.o: Game.cpp Game.h
	g++ -g -c Game.cpp

build: main.o 
	g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	mv *.o sfml-app ../Build/
bar: build	
	../Build/sfml-app

debug-build: main.o
	g++ -g main.o -o sfml-app-debug -lsfml-graphics -lsfml-window -lsfml-system
	mv *.o ../Build/

