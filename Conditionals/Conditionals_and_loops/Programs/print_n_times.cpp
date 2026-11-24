#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int i;
    cout << "Enter i: ";
    cin >> i;
    for (; i < number; i++)
    {
        cout << "Hello Coder" << endl;
    }
    return 0;
}