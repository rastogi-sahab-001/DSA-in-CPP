#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 1000 && num < 10000)
    {
        cout << "Four Digit number";
    }
    else
    {
        cout << "Not four Digit number";
    }
    return 0;
}