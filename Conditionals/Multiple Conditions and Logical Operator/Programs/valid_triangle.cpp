#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a first number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;
    cout << "Enter a third number: ";
    cin >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "Valid Traingle";
    }
    else
    {
        cout << "Invalid Traingle";
    }
    return 0;
}