#include<iostream>
#include<string>                     // make the standard string facilities accessible
using namespace std;                 // make std names available without std::prefix

string s = "Ignorance is bliss!";    // ok: string is std::string

int main ()
{
    cout << s;
    cout << '\n';
}
