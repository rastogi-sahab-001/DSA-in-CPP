#include <iostream>
using namespace std;
int main()
{
    float number;
    cout << "Enter a Number: ";
    cin >> number;
    if (number == (int)number)
    {
        cout << "Integer number";
    }
    else
    {
        cout << "Not Integer Number";
    }
    return 0;
}