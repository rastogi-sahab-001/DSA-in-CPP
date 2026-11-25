#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0 || count == 1)
    {
        cout << "Neither prime nor composite number";
    }
    else if (count < 3)
    {
        cout << "Prime Number" << " ";
    }
    else
    {
        cout << "Composite Number" << " ";
    }
    return 0;
}

// Another code

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int count = 0;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }

    if (n <= 1)
    {
        cout << "Neither Prime nor Composite";
    }
    else if (count == 0)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Composite Number";
    }

    return 0;
}