#include <iostream>
using namespace std;
int main()
{
    char Character;
    cout << "Enter a Character: ";
    cin >> Character;
    if ((Character >= 'A' && Character <= 'Z') || (Character >= 'a' && Character <= 'z'))
    {
        cout << "Alphabet";
    }
    else
    {
        cout << "not alphabet";
    }

    return 0;
}