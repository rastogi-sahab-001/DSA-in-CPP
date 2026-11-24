#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter a length: ";
    cin >> length;
    int breadth;
    cout << "Enter a breadth: ";
    cin >> breadth;
    int area;
    area = length * breadth;
    int perimeter;
    perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        cout << "Area is greater than perimeter";
    }
    else
    {
        cout << "perimeter is greater than Area";
    }
    return 0;
}