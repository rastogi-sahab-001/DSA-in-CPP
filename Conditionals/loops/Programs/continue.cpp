#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int j = n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 5)
        {
            continue;
            ;
        }
        cout << i << " ";
    }

    return 0;
}