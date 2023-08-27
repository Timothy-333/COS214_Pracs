ofiles = main.o SmartContract.o SmartContractState.o Accepted.o Rejected.o Completed.o Negotiation.o TentativelyAccepted.o

gpp_o = g++ -c -std=c++11

main: $(ofiles)
	g++ -std=c++11 $(ofiles) -o main

main.o: main.cpp
	$(gpp_o) main.cpp

SmartContract.o: SmartContract.cpp SmartContract.h SmartContractState.h Accepted.h Rejected.h Completed.h Negotiation.h TentativelyAccepted.h
	$(gpp_o) SmartContract.cpp

SmartContractState.o: SmartContractState.cpp SmartContractState.h
	$(gpp_o) SmartContractState.cpp

Accepted.o: Accepted.cpp Accepted.h SmartContractState.h
	$(gpp_o) Accepted.cpp

Rejected.o: Rejected.cpp Rejected.h SmartContractState.h
	$(gpp_o) Rejected.cpp

Completed.o: Completed.cpp Completed.h SmartContractState.h
	$(gpp_o) Completed.cpp

Negotiation.o: Negotiation.cpp Negotiation.h SmartContractState.h
	$(gpp_o) Negotiation.cpp

TentativelyAccepted.o: TentativelyAccepted.cpp TentativelyAccepted.h SmartContractState.h
	$(gpp_o) TentativelyAccepted.cpp

run: main
	./main

clean:
	rm *.o main