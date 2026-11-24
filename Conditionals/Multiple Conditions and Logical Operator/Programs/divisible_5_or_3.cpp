#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 5 == 0 || num % 3 == 0)
    {
        cout << "Divisble by 5 or 3";
    }
    else
    {
        cout << "Not Divisble by 5 or 3";
    }
    return 0;
}