#include <iostream>
using namespace std;
int main()
{
    int cost_price;
    cout << "Enter a cost_price: ";
    cin >> cost_price;
    int sell_price;
    cout << "Enter a sell_price: ";
    cin >> sell_price;
    if (cost_price == sell_price)
    {
        cout << "No Profit No Loss";
    }
    else if (cost_price > sell_price)
    {
        cout << "Loss";
    }
    else
    {
        cout << "Profit";
    }
    return 0;
}