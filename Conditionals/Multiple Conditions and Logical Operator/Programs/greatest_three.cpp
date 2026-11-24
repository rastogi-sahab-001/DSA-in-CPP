#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if (a == b && b == c && c == a)
    {
        cout << "a, b and c are all equal" << endl;
    }
    else if (a > b && a > c)
    {
        cout << a << " " << "is greater than b and c" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " " << "is greater than a and c" << endl;
    }
    else
    {
        cout << c << " " << "is greater than a and b" << endl;
    }
    return 0;
}