#include <iostream>
using namespace std;
int main()
{
    double simple, rate, time, interest;
    cout << "Enter Simple Interest: ";
    cin >> simple;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time: ";
    cin >> time;
    interest = (simple * rate * time) / 100;
    cout << "Simple Interest of this number is: " << interest << endl;
    return 0;
}