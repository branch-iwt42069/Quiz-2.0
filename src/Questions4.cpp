#include <iostream>
#include "functions.h"
using namespace std;
int Question4(int yes)
{
	char a='1',b='2', c='3', d='4'; 
	char answer;
	int df=0;
	cout<<"Vopros 4"<<endl<<endl<<"zdes"<<endl<<"nujen"<<endl<<"vopros";
	cout<<endl<<endl<<"1. A"<<endl<<"2. B"<<endl<<"3. C"<<endl<<"4. D"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Otvet (cifra ot 1 do 4): ";
        cin>>answer;
        df = funcAnswer(answer, a, b, c, d);
        if (df == 1)
        {
        	yes++;
        	break;
		}
		if (df==2)
		{
		    cout<<endl<<"Nedopustimoe znachenie. Vvedite cifru ot 1 do 4 zanovo!";
		}
		if (df==0)
		{
		    break;
		}
	}
	return yes;	
}
