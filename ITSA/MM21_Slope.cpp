#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

double funX(double x);
double Msec(double x, double dx);
double Mchord(double x, double dx);

int main()
{
    unsigned int time;
    double x, dx;
    cin >> time >> x >> dx;
    for (unsigned int i = 0; i < time; i++)
    {
        cout << fixed << dx << " "
             << Msec(x, dx) << " "
             << Mchord(x, dx) << endl;
        dx = dx / 2;
    }
}

double funX(double x)
{
    return (x * x) + (4 * sin(x)) + 7;
}

double Msec(double x, double dx)
{
    double a = funX(x + dx), b = funX(x), c = dx;
    return (a - b) / c;
}

double Mchord(double x, double dx)
{
    double a = funX(x + dx), b = funX((x - dx)), c = 2 * dx;
    return (a - b) / c;
}