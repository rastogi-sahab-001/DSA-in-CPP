#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Capital Alphabet: " << ch << endl;
    }
    else
    {
        cout << "Not Capital Alphabet: " << ch << endl;
    }

    return 0;
}