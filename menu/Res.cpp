#include <iostream>
using namespace std;
void Res(int x)
{
	cout<<"-------------------------------------"<<endl<<"|       Pravil'nye otvety: "<<x<<"        |"<<endl<<"|                                   |"<<endl;
    cout<<"|       Nepravil'nye otvety: "<<6-x<<"      |"<<endl<<"|                                   |";
    if(x==0 || x==1 || x==2)
    {
        cout<<endl<<"|       Vash uroven' znanij: "<<"Low"<<"    |"<<endl;
	}
	else if(x==3 || x==4)
	{
		cout<<endl<<"|       Vash uroven' znanij: "<<"Medium"<<" |"<<endl;
	}
	else
	{
	    cout<<endl<<"|       Vash uroven' znanij: "<<"High"<<"   |"<<endl;
	}
	cout<<"-------------------------------------"<<endl;
}


