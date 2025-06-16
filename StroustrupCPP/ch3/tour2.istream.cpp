#include<iostream>
#include<string>        // make the standard string facilities accessible
using namespace std;    // make std names available without std::prefix

void f()
{
    int i;
    cin >> i;  // read an integer into i

    double d;
    cin >> d;  // read a double-precision, floating-point number into d
}

int main ()
{
    const float factor = 2.54;  // 1 inch equals 2.54 cm
    float x, in, cm;
    char ch = 0;

    cout << "enter length: ";

    cin >> x;     // read a floating-point number
    cin >> ch;    // read a suffix

    switch (ch) {
    case 'i' :    // inch
        in = x;
        cm = x*factor;
        break;
    case 'c' :    // cm
        in = x/factor;
        cm = x;
        break;
    default:
        in = cm = 0;
        break;
    }

    cout << in << " in = " << cm << " cm\n";
}
