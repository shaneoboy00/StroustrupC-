#include<iostream>
using namespace std;    // make std names available without std::prefix

bool accept3()
{
    int tries = 1;
    while (tries < 4) {
        cout << "Do you want to proceed (y or n)?\n";    // write question
        char answer = 0;
        cin >> answer;                                   // read answer

        switch (answer) {
            case 'y' :
                return true;
            case 'n' :
                return false;
            default:
                cout << "Sorry, I don't understand that.\n";
                tries = tries + 1;
            }
    }
    cout << "I'll take that for a no.\n";
    return false;
}

int main () { }
