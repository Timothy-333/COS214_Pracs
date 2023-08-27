all: consumer

consumer: consumer.o consumercreator.o jsonconsumer.o odataconsumer.o main.o
	g++ $^ -o $@
	
%.o: %.cpp
	g++ -g -W -Wall -Werror -Wextra -pedantic -c $^
	
run: 
	./consumer

clean: 
	rm *.o consumer
	
	#