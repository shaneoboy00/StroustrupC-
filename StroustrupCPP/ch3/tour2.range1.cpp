#include<iostream>
#include<string>        // make the standard string facilities accessible
#include<vector>
using namespace std;    // make std names available without std::prefix

struct Entry {
    string name;
    int number;
};

vector<Entry> phone_book(1000);

void f()
{
    int i = phone_book[1001].number;  // 1001 is out of range
}

int main () {
    f();

    cout << '\n';
}
