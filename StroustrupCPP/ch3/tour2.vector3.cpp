#include<iostream>
#include<string>        // make the standard string facilities accessible
#include<vector>
using namespace std;    // make std names available without std::prefix

struct Entry {
    string name;
    int number;
};

vector<Entry> book(1000);     // vector of 1000 elements
vector<Entry> books[1000];    // 1000 empty vectors

int main () { }
