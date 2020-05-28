make=
CC=g++
FLAG = -Wall -Werror -std=c99
Src=src/
Menu=Menu/
BIN = bin/
OBJECKTALL=$(Src)main.o $(Src)funcAnswer.o $(Src)Questions1.o $(Src)Questions2.o $(Src)Questions3.o $(Src)Questions4.o $(Src)Questions5.o $(Src)Questions6.o $(Src)Questions7.o $(Src)Questions8.o $(Src)Questions9.o $(Src)Questions10.o $(Menu)Math.o $(Menu)Res.o clean

all: QuizzRunner

QuizzRunner: 
	$(CC) $(OBJECKTALL) -o $(BIN)/QuizRunner

main.o: $(Src)main.cpp
	$(CC) 


funcAncwer.o: $(Src) 
	$(CC)


Questions1.o: $(Src)Questions1.cpp 
	$(CC) 

Questions2.o: $(Src)Questions2.cpp 
	$(CC) 

Questions3.o: $(Src)Questions3.cpp 
	$(CC) 

Questions4.o: $(Src)Questions4.cpp 
	$(CC) 

Questions5.o: $(Src)Questions5.cpp 
	$(CC) 

Questions6.o: $(Src)Questions6.cpp 
	$(CC) 

Questions7.o: $(Src)Questions7.cpp 
	$(CC) 

Questions8.o: $(Src)Questions8.cpp 
	$(CC) 

Questions9.o: $(Src)Questions9.cpp 
	$(CC) 

Questions10.o: $(Src)Questions10.cpp 
	$(CC) 

Res.o: $(Menu)Res.cpp 
	$(CC) 

Math.o: $(Menu)Math.cpp 
	$(CC)  



clean:
	rm -rf $(Src)*.o $(Menu)*.o 