#include<iostream>
#include<string>        // make the standard string facilities accessible
#include<vector>
using namespace std;    // make std names available without std::prefix

struct Entry {
    string name;
    int number;
};

Entry phone_book[1000];

void print_entry(int i)    // simple use
{
    cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}

int main () { }
