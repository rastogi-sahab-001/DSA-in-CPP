#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int term = 2;
    for (int i = 1; i <= n; i++)
    {
        cout << term << " ";
        term += 3;
    }
    return 0;
}