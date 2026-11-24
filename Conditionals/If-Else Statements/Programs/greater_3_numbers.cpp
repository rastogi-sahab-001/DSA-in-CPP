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

    int third;
    cout << "Enter a third_Number: ";
    cin >> third;

    if (first == second == third)
    {
        cout << "first_number is equal to second_Number is equal to third_Number" << endl;
    }
    else if (first > second && first > third)
    {
        cout << "first_number is greater than second_Number and third_Number" << endl;
    }
    else if (second > first && second > third)
    {
        cout << "second_Number is greater than first_number and third_Number" << endl;
    }
    else
    {
        cout << "third_Number is greater than first_number and second_Number" << endl;
    }
    return 0;
}