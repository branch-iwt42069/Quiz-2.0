Gpp = g++

Gpp_FLAG = -Wall -Werror -Wextra -c

BIN = ./bin

SRC = ./src

all : main question answers QUIZ Clean

main :
	$(Gpp) $(Gpp_FLAG) $(SRC)/main.cpp

question :
	$(Gpp) $(Gpp_FLAG) $(SRC)/question.cpp

answers :
	$(Gpp) $(Gpp_FLAG) $(SRC)/answers.cpp

QUIZ :
	$(Gpp) main.o question.o answers.o -o $(BIN)/QUIZ.exe

Clean:
	rm -rf *.o