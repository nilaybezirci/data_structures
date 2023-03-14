hepsi: derle calistir 

derle:
	g++ -I ./include/ -o ./lib/Liste.o -c ./src/Liste.cpp
	g++ -I ./include/ -o ./lib/FileOperations.o -c ./src/FileOperations.cpp
	g++ -I ./include/ -o ./lib/ListOperations.o -c ./src/ListOperations.cpp
	g++ -I ./include/ -o ./lib/Kaynak.o -c ./src/Kaynak.cpp
	
	g++ -I ./include/ -o ./bin/VeriOdev ./lib/Liste.o ./lib/FileOperations.o ./lib/ListOperations.o  ./src/Kaynak.cpp
	
	
	
calistir:
	./bin/VeriOdev