#include <iostream>
#include <cmath>
using namespace std;
bool result;
bool isInArea(double x, double y)
{
    if (x >= -1 && x <= 0)
        if (y >= 0 && y <= 1)
            return true;
        else
            return false;
    else if ((pow(x, 2) + pow(y, 2)) <= 1)
        if (x >= 0 && x <= 1)
            if (y <= 0 && y >= -1)
                return true;
            else
                return false;
        else
            return false;
    else
        return false;
}
void main()
{
    double x, y;
    cout << "Enter a value x = "; cin >> x;
    cout << "Enter a value y = "; cin >> y;
    result = isInArea(x, y);
    if (result == true) cout << "The point is in area" << endl;
    else cout << "The point is not in area" << endl;
}