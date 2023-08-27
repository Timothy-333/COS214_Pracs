all: window

window: task3.o
	g++ $^ -o $@
    
%.o: %.cpp
	g++ -g -W -Wall -Werror -Wextra -pedantic -c $^
    
run: 
	./window

clean: 
	rm *.o window
    
	#