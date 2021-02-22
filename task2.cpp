#include <iostream>
#include <cmath>
using namespace std;
double fun(double x)
{
    return x <= 3 ? ((pow(x,2)) - 3 * x + 9) : (1 / ((pow(x,3)) + 6));
}
void main()
{
    double x;
    cout << "Enter a value x = "; cin >> x;
    cout << "Calculation result is " << fun(x) << endl;
}