#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int c;

    c = a;
    cout << "Line 6 - = Operator, Value of c: " << c << endl;

    c += a;
    cout << "Line 10 - += Operator, Value of c: " << c << endl;

    c -= a;
    cout << "Line 14 - -= Operator, Value of c: " << c << endl;

    c *= a;
    cout << "Line 18 - *= Operator, Value of c: " << c << endl;

    c /= a;
    cout << "Line 22 - /= Operator, Value of c: " << c << endl;

    c = 200;
    c %= a;
    cout << "Line 26 - %= Operator, Value of c: " << c << endl;

    c <<= 2;
    cout << "Line 30 - <<= Operator, Value of c: " << c << endl;

    c >>= 2;
    cout << "Line 34 - >>= Operator, Value of c: " << c << endl;

    c &= 2;
    cout << "Line 38 - &= Operator, Value of c: " << c << endl;

    c |= 2;
    cout << "Line 42 - |= Operator, Value of c: " << c << endl;

    return 0;
}
