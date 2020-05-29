
#include "../headers/design.h"
#include "../headers/functions.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <ncurses.h>
#include <locale.h>

void init() {
	setlocale(LC_ALL, "");
	initscr();
	noecho();
	curs_set(0);
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLUE);
	init_pair(2, COLOR_WHITE, COLOR_BLUE);
	attron(COLOR_PAIR(1));
	bkgd(COLOR_PAIR(1));
	refresh();
}

void intro() {
	clear();
	attron(COLOR_PAIR(1));
	move(1, 3);
	addstr("                                                                             ");
	move(2, 3);
	addstr("   ###    ##    ## #### ##     ## ########  #######  ##     ## #### ######## ");
	move(3, 3);
	addstr("  ## ##   ###   ##  ##  ###   ### ##       ##     ## ##     ##  ##       ##  ");
	move(4, 3);
	addstr(" ##   ##  ####  ##  ##  #### #### ##       ##     ## ##     ##  ##      ##   ");
	move(5, 3);
	addstr("##     ## ## ## ##  ##  ## ### ## ######   ##     ## ##     ##  ##     ##    ");
	move(6, 3);
	addstr("######### ##  ####  ##  ##     ## ##       ##  ## ## ##     ##  ##    ##     ");
	move(7, 3);
	addstr("##     ## ##   ###  ##  ##     ## ##       ##    ##  ##     ##  ##   ##      ");
	move(8, 3);
	addstr("##     ## ##    ## #### ##     ## ########  ##### ##  #######  #### ######## ");
	attron(COLOR_PAIR(2));
	move(11, 20);
	addstr("Autors:");
	move(13, 20);
	addstr("Stepanchenko Egor Andreyevich");
	move(14, 20);
	addstr("Noskov Sergey");
	move(15, 20);
	addstr("Matashev Vladimir");
	move(18, 20 );
	addstr("Press button to begin");
	refresh();
	getch();
}

void mainMenu() {
	clear();
	attron(COLOR_PAIR(2));
	
	attron(COLOR_PAIR(1));
	move(1, 3);
	addstr("                                                                             ");
	move(2, 3);
	addstr("   ###    ##    ## #### ##     ## ########  #######  ##     ## #### ######## ");
	move(3, 3);
	addstr("  ## ##   ###   ##  ##  ###   ### ##       ##     ## ##     ##  ##       ##  ");
	move(4, 3);
	addstr(" ##   ##  ####  ##  ##  #### #### ##       ##     ## ##     ##  ##      ##   ");
	move(5, 3);
	addstr("##     ## ## ## ##  ##  ## ### ## ######   ##     ## ##     ##  ##     ##    ");
	move(6, 3);
	addstr("######### ##  ####  ##  ##     ## ##       ##  ## ## ##     ##  ##    ##     ");
	move(7, 3);
	addstr("##     ## ##   ###  ##  ##     ## ##       ##    ##  ##     ##  ##   ##      ");
	move(8, 3);
	addstr("##     ## ##    ## #### ##     ## ########  ##### ##  #######  #### ######## ");
	attron(COLOR_PAIR(2));
	move(11, 10);
	addstr("Rules:");
	move(13, 10);
	addstr("You are going to be testetd in you anime knowlege.");
	move(14, 10);
	addstr("At the end of the test you will see your powerlevel");
	move(15, 10);
	addstr("We won't be rude with you unless you are a total dumb dumb.");
	move(17, 10);
	addstr("Controls:");
	move(19, 10);
	addstr("Press '1', '2', '3', '4' or 'A', 'B', 'C', 'D'");
	move(20, 10);
	addstr("to choose your variants");
	move(21, 10);
	addstr("Press ESCAPE if you are loser and need to quit.");
	refresh();
	getch();
}

void showQuestion(short questionNumber, short currentQuestion) {
	clear();
	move(2, 34);
	printw("%d / 20", currentQuestion);
	attron(COLOR_PAIR(2));
	move(6, 10);
	for (unsigned short i = 0; i < dataBase[questionNumber].ques.size(); ++i) {
		char c = dataBase[questionNumber].ques[i];
		if (c == '$')
			printw("\n\t  ");
		else
		printw("%c", c);
	}
	move(11, 11);
	addstr("1) ");
	for (unsigned short i = 0; i < dataBase[questionNumber].ans1.size(); ++i) {
		char c = dataBase[questionNumber].ans1[i];
		if (c == '$')
			printw("\n\t   ");
		else
		printw("%c", c);
	}
	move(14, 11);
	addstr("2) ");
	for (unsigned short i = 0; i < dataBase[questionNumber].ans2.size(); ++i) {
		char c = dataBase[questionNumber].ans2[i];
		if (c == '$')
			printw("\n\t   ");
		else
		printw("%c", c);
	}
	move(17, 11);
	addstr("3) ");
	for (unsigned short i = 0; i < dataBase[questionNumber].ans3.size(); ++i) {
		char c = dataBase[questionNumber].ans3[i];
		if (c == '$')
			printw("\n\t   ");
		else
		printw("%c", c);
	}
	move(20, 11);
	addstr("4) ");
	for (unsigned short i = 0; i < dataBase[questionNumber].ans4.size(); ++i) {
		char c = dataBase[questionNumber].ans4[i];
		if (c == '$')
			printw("\n\t   ");
		else
		printw("%c", c);
	}

	

	refresh();
}

void returnToNormalMode() {
	echo();
	endwin();
}

void showResult(short result) {
	clear();
	if (result <= 7) {
		attron(COLOR_PAIR(1));
		move(1, 10);

		addstr("                                                                ");
		move(2, 10);
		addstr(" ######  ########  #### ##    ##  ######   ########             ");
		move(3, 10);
		addstr("##    ## ##     ##  ##  ###   ## ##    ##  ##                   ");
		move(4, 10);
		addstr("##       ##     ##  ##  ####  ## ##        ##                   ");
		move(5, 10);
		addstr("##       ########   ##  ## ## ## ##   #### ######               ");
		move(6, 10);
		addstr("##       ##   ##    ##  ##  #### ##    ##  ##                   ");
		move(7, 10);
		addstr("##    ## ##    ##   ##  ##   ### ##    ##  ##       ### ### ### ");
        move(8, 10);
		addstr(" ######  ##     ## #### ##    ##  ######   ######## ### ### ### ");

		attron(COLOR_PAIR(2));
		move(11, 29);
		printw("Your pathetic result - %d", result);
		move(14, 16);

		addstr("Dude, I bet you whatced 1st season of SAO and ");

		move(15, 16);
		addstr("thinking that you are an anime pro.");
		move(18, 16);
		addstr("Get out of my sight!");

                                        

	} else
	if (result <= 14) {
		attron(COLOR_PAIR(1));
		move(1, 10);

		addstr("##    ## ####  ######  ######## ");
		move(2, 10);
		addstr("###   ##  ##  ##    ## ##       ");
		move(3, 10);
		addstr("####  ##  ##  ##       ##       ");
		move(4, 10);
		addstr("## ## ##  ##  ##       ######   ");
		move(5, 10);
		addstr("##  ####  ##  ##       ##       ");
		move(6, 10);
		addstr("##   ###  ##  ##    ## ##       ");
		move(7, 10);
		addstr("##    ## ####  ######  ######## ");

		attron(COLOR_PAIR(2));
		move(11, 29);
		printw("Your result - %d", result);
		move(14, 16);
		addstr("Well it looks like you know enough titles");
		move(15, 16);
		addstr("but is it your limit?.");
		move(18, 16);

   

	} else
	if (result <= 18) {
		attron(COLOR_PAIR(1));
		move(2, 10);

		addstr(" ######    #######   #######  ########  ");
		move(3, 10);
		addstr("##    ##  ##     ## ##     ## ##     ## ");
		move(4, 10);
		addstr("##        ##     ## ##     ## ##     ## ");
		move(5, 10);
		addstr("##   #### ##     ## ##     ## ##     ## ");
		move(6, 10);
		addstr("##    ##  ##     ## ##     ## ##     ## ");
		move(7, 10);
		addstr("##    ##  ##     ## ##     ## ##     ## ");
		move(8, 10);
		addstr(" ######    #######   #######  ########  ");

		attron(COLOR_PAIR(2));
		move(11, 29);
		printw("Your result - %d", result);
		move(14, 16);

		addstr("Wow you are good bro.");
		move(15, 16);
		addstr("But you still is not as powerful as me!");
		move(18, 16);
		addstr("Go and whatch anime instead!");
      

	} else
	if (result <= 21) {
		attron(COLOR_PAIR(1));
		move(1, 3);

		addstr("                                                                         ");
		move(2, 3);
		addstr(" #######  ##     ## ######## ########  ##     ## #### ##    ## ########  ");
		move(3, 3);
		addstr("##     ## ##     ## ##       ##     ## ###   ###  ##  ###   ## ##     ## ");
		move(4, 3);
		addstr("##     ## ##     ## ##       ##     ## #### ####  ##  ####  ## ##     ## ");
		move(5, 3);
		addstr("##     ## ##     ## ######   ########  ## ### ##  ##  ## ## ## ##     ## ");
		move(6, 3);
		addstr("##     ##  ##   ##  ##       ##   ##   ##     ##  ##  ##  #### ##     ## ");
		move(7, 3);
		addstr("##     ##   ## ##   ##       ##    ##  ##     ##  ##  ##   ### ##     ## ");
		move(8, 3);
		addstr(" #######     ###    ######## ##     ## ##     ## #### ##    ## ########  ");		

		attron(COLOR_PAIR(2));
		move(11, 29);
		printw("Your result - %d", result);
		move(14, 16);
		addstr("IMPOSSIBLE! How does so powerful anime-whatcher");
		move(15, 16);
		addstr("spend his time on this test?.");
		move(18, 16);
		addstr("Anyway you can call yourself megamind!");
     

	}
	getch();
}
