#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int star = 2 * n - 1;
    int space = 0;

    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }

        cout << endl;

        star -= 2;
        space += 1;
    }

    return 0;
}