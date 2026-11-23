#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    if (number < 0)
    {
        cout << -number << endl;
    }
    else
    {
        cout << number << endl;
    }
    return 0;
}