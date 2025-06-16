#include<iostream>
#include<string>        // make the standard string facilities accessible
using namespace std;    // make std names available without std::prefix

int main ()
{
    string str;

    cout << "Please enter your name\n";
    getline(cin,str);
    cout << "Hello, " << str << "!\n";
}
