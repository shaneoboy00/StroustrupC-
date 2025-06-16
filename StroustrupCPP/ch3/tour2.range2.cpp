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

int main () { }
