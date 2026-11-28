#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    // First row
    for (int j = 1; j <= 2 * n - 1; j++)
    {
        cout << "* ";
    }
    cout << endl;

    // Remaining rows
    for (int i = 1; i < n; i++)
    {
        int star = n - i;
        int space = 2 * i - 1;

        // Left stars
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }

        // Middle spaces
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }

        // Right stars
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}