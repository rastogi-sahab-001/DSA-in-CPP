#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    if (number < 0 || number > 100)
    {
        cout << "Invalid Number" << endl;
    }
    else if (number >= 33)
    {
        cout << "Pass" << endl; 
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
}