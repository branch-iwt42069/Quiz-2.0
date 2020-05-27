#include "../headers/functions.h"
#include "../headers/design.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>

using namespace std;

vector< baseStruct > dataBase;

short massive(){
        short questionNumbers[20];
        for (int i = 0; i < 20; ++i)
			questionNumbers[i] = 0;
		for (int i = 0; i < 20; ++i) {
			questionNumbers[i] = i % dataBase.size();
		}
		return *questionNumbers;
}

int readBase() {
	ifstream ist("base.txt");
	baseStruct tempStruct;
	string r_ans;
	while(!ist.eof()) {
		if (ist.eof())
			break;
		getline(ist, tempStruct.ques);
		getline(ist, tempStruct.ans1);
		getline(ist, tempStruct.ans2);
		getline(ist, tempStruct.ans3);
		getline(ist, tempStruct.ans4);
		getline(ist, r_ans);
		tempStruct.right_ans = atoi(r_ans.c_str());
		dataBase.push_back(tempStruct);
	}
	return dataBase.size();
}


