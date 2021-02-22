#include <iostream>
#include <cmath>
using namespace std;
bool result;
double fun(double x)
{
    return x <= 3 ? ((pow(x, 2)) - 3 * x + 9) : (1 / ((pow(x, 3)) + 6));
}
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
    char a;
    double x;
    double y;
    cout << "Select the task number:\n" << "1.Task1\n" << "2.Task2\n" << endl;
    cout << "The task number is "; cin >> a;
    switch (a)
    {
    case '1':
        cout << "Enter a value x = "; cin >> x;
        cout << "Enter a value y = "; cin >> y;
        result = isInArea(x, y);
        if (result == true) cout << "The point is in area" << endl;
        else cout << "The point is not in area" << endl;
        break;
    case '2':
        cout << "Enter a value x = "; cin >> x;
        cout << "Calculation result is " << fun(x) << endl;
        break;
    }
    system("pause");
}