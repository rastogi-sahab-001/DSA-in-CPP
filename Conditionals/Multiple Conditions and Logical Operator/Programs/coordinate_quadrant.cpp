#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "Lies at Origin" << endl;
    }
    else if (y == 0)
    {
        cout << "Lies on X-axis" << endl;
    }
    else if (x == 0)
    {
        cout << "Lies on Y-axis" << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "Lies in First Quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Lies in Second Quadrant" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Lies in Third Quadrant" << endl;
    }
    else
    {
        cout << "Lies in Fourth Quadrant" << endl;
    }

    return 0;
}