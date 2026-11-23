#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your current age: ";
    cin >> age;
    if (age % 2 == 0)
    {
        cout << "You can Drive";
    }
    else
    {
        cout << "You can not Drive";
    }
    return 0;
}