#include <iostream>
using namespace std;
int main()
{
    int first;
    cout << "Enter a first_Number: ";
    cin >> first;

    int second;
    cout << "Enter a second_Number: ";
    cin >> second;

    if (first == second)
    {
        cout << "first_number is equal to second_Number" << endl;
    }
    else if (first > second)
    {
        cout << "first_number is greater than second_Number" << endl;
    }
    else
    {
        cout << "second_Number is greater than first_number" << endl;
    }
    return 0;
}