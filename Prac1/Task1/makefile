all: ship

ship: ship.o cargoship.o cargomemento.o main.o 
	g++ $^ -o $@
	
%.o: %.cpp
	g++ -g -W -Wall -Werror -Wextra -pedantic -c $^
	
run: 
	make clean
	make
	./ship

clean: 
	rm *.o ship
	
	#