#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper part
    for (int i = 1; i <= n; i++)
    {
        int nsp = n - i;
        int nst = 2 * i - 1;

        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 1; i--)
    {
        int nsp = n - i;
        int nst = 2 * i - 1;

        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}