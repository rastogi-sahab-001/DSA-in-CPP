#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "Krishna Rastogi" << endl;
    }
    else if (num % 5 == 0)
    {
        cout << "Krati Gupta" << endl;
    }
    else
    {
        cout << "Akansha Varshney" << endl;
    }
    return 0;
}