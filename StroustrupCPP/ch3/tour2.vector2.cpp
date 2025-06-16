#include<iostream>
#include<string>        // make the standard string facilities accessible
#include<vector>
using namespace std;    // make std names available without std::prefix

struct Entry {
    string name;
    int number;
};

vector<Entry> phone_book(1000);

void print_entry(int i)    // simple use, exactly as for array
{
    cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}

void add_entries(int n) // increase size by n
{
    phone_book.resize(phone_book.size() + n);
}

int main () { }
