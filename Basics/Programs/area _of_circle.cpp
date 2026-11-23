#include <iostream>
using namespace std;
int main()
{
    double Radius, Area;
    cout << "Enter the Radius: ";
    cin >> Radius;
    Area = 3.14 * Radius * Radius;
    cout << "Area of circle is: " << Area << endl;
    return 0;
}