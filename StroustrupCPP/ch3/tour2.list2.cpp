#include<iostream>
#include<string>        // make the standard string facilities accessible
#include<list>
using namespace std;    // make std names available without std::prefix

struct Entry {
    string name;
    int number;
};

list<Entry> phone_book;

void print_entry(const string s)
{
    typedef list<Entry>::const_iterator LI;

    for (LI i = phone_book.begin(); i != phone_book.end(); ++i) {
        Entry& e = *i;  // reference used as shorthand
        if (s == e.name) cout << e.name << ' ' << e.number << '\n';
    }
}

int main () { }
