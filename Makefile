main: main.o knights.o
	g++ -o main main.o knights.o	

main.o: main.cpp
	g++ -c main.cpp

knights.o: knights.cpp knights.h
	g++ -c knights.cpp

clean: 
	rm -f main knights main.o knights.o