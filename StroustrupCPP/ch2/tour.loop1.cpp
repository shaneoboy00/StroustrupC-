#include<iostream>
using namespace std;    // make std names available without std::prefix

bool accept()
{
    cout << "Do you want to proceed (y or n) ?\n";    // write question

    char answer = 0;
    cin >> answer;                                    // read answer

    if (answer == 'y') return true;
    return false;
}

int main () { }
