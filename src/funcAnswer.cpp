#include <iostream>
int funcAnswer(char answer, char a, char b, char c, char d)
{
	int xx = 0;
    if (answer==a || answer==b || answer==c)
    {
        return xx;
	}
	else if (answer==d)
	{
		xx++; 
		return xx;
	}
	else
	{
		xx = 2;
		return xx;
	}
}
