#include<iostream>
#include<string>        // make the standard string facilities accessible
#include<vector>
using namespace std;    // make std names available without std::prefix

struct Entry {
    string name;
    int number;
};

template<class T> class Vec : public vector<T> {
public:
    Vec() : vector<T>() { }
    Vec(int s) : vector<T>(s) { }

    T& operator[](int i) { return at(i); }                // range-checked
    const T& operator[](int i) const { return at(i); }    // range-checked
};

Vec<Entry> phone_book(1000);

void print_entry(int i)    // simple use, exactly as for vector
{
    cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}

int main ()
try {
    // your code
    for (int i = 0; i<10000; i++) print_entry(i);
}
catch (out_of_range) {
    cerr << "range error\n";
}
catch (...) {
    cerr << "unknown exception thrown\n";
}
