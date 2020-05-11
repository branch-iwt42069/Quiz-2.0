make=
CC=g++
FLAG = -Wall -Werror -std=c99
MDir=src/
QDir=src/
MMDir=Menu/
OBJECKTALL=$(Dir)main.o $(QDir)funcAnswer.o $(QDir)Questions1.o $(QDir)Questions2.o $(QDir)Questions3.o $(QDir)Questions4.o $(QDir)Questions5.o $(QDir)Questions6.o $(QDir)Questions7.o $(QDir)Questions8.o $(QDir)Questions9.o $(QDir)Questions10.o $(MMDir)Math.o $(MMDir)Res.o

all: QuizzRunner

QuizzRunner: 
	$(CC) $(OBJECKTALL) -o QuizRunner

main.o: $(MDir)main.cpp
	$(CC) 


funcAncwer.o: $(MQDir) 
	$(CC)


Questions1.o: $(QDir)Questions1.cpp 
	$(CC) 

Questions2.o: $(QDir)Questions2.cpp 
	$(CC) 

Questions3.o: $(QDir)Questions3.cpp 
	$(CC) 

Questions4.o: $(QDir)Questions4.cpp 
	$(CC) 

Questions5.o: $(QDir)Questions5.cpp 
	$(CC) 

Questions6.o: $(QDir)Questions6.cpp 
	$(CC) 

Questions7.o: $(QDir)Questions7.cpp 
	$(CC) 

Questions8.o: $(QDir)Questions8.cpp 
	$(CC) 

Questions9.o: $(QDir)Questions9.cpp 
	$(CC) 

Questions10.o: $(QDir)Questions10.cpp 
	$(CC) 

Res.o: $(MMDir)Res.cpp 
	$(CC) 

Math.o: $(MMDir)Math.cpp 
	$(CC)  



clean:
	rm -rf $(MenuDir)*.o $(RQDir)*.o $(MQDir)*.o $(RMDir)*.o $(MMDir)*.o 