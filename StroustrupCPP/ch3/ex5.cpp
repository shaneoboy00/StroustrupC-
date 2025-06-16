#include<iostream>
using namespace std;    // make std names available without std::prefix

void h(int i)
{
    cout << "the value of i is ";
    cout << i;
    cout << '\n';
}

int main ()
{
    h(10);
    cout << '\n';
}
