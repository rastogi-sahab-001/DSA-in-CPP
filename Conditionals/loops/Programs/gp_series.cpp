#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int term = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << term << " ";
        term = term * 2;
    }
    return 0;
}