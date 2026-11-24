#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > -69 && num < 69)
    {
        cout << "Magnitude is smaller than 69";
    }
    else
    {
        cout << "Magnitude is not smaller than 69";
    }
    return 0;
}