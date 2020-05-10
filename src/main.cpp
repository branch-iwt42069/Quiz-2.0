#include "head.h"

using namespace std;

int main()
{
	cout << "'########:'########::'######::'########:" << endl;
	cout << "... ##..:: ##.....::'##... ##:... ##..::" << endl;
	cout << "::: ##:::: ##::::::: ##:::..::::: ##::::" << endl;
	cout << "::: ##:::: ######:::. ######::::: ##::::" << endl;
	cout << "::: ##:::: ##...:::::..... ##:::: ##::::" << endl;
	cout << "::: ##:::: ##:::::::'##::: ##:::: ##::::" << endl;
	cout << "::: ##:::: ########:. ######::::: ##::::" << endl;
	cout << ":::..:::::........:::......::::::..:::::" << endl;
	
	
	cout << "MADE BY NOSKOV SERGEY, STEPANCHENKO EGOR AND MATASHEV VLADIMIR"<<endl;

	cout << "Press Enter to start the quiz .. " << endl;
	cin.get();

    string Name;
    int Age;

    cout << "What is your name?" << endl;
    cin >> Name;
    cout << endl;
    cout << "How old are you?" << endl;
    cin >> Age;
    cout << endl;
    string Respond;
    cout << "Are you ready to take the quiz " << Name << "? Yes/no" << endl;
    cin >> Respond;
    if (Respond == "yes") {
        cout << endl;
        cout << "ok, goodluck!" << endl;
    } else {
        cout << "ok, goodbye!" << endl;
        return 0;
    }
}
