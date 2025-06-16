#include<iostream>
using namespace std;    // make std names available without std::prefix

void g()
{
    int i = 10;
    cout << i;
}

int main ()
{
    g();
    cout << '\n';
}
