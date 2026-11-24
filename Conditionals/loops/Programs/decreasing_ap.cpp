#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = n; i >= 1; i -= 4)
    {
        cout << i << " ";
    }
    return 0;
}