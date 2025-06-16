#include<iostream>
#include<string>        // make the standard string facilities accessible
using namespace std;    // make std names available without std::prefix

string name = "Niels Stroustrup";

void f()
{
    printf("name: %s\n", name.c_str());
}

int main ()
{
    f();

    cout << '\n';
}
