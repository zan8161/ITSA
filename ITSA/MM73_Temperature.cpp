#include <iomanip>
#include <iostream>

using namespace std;

double ftemp(double cel);
double absolutetemp(double cel);

int main()
{
    double temp;
    cin >> temp;
    cout << "Fahrenheit = " << fixed << setprecision(2) << ftemp(temp) << endl;
    cout << "Absolute temperature = " << fixed << setprecision(2) << absolutetemp(temp) << endl;
}

double ftemp(double cel)
{
    return cel * 9 / 5 + 32;
}

double absolutetemp(double cel)
{
    return cel + 273.15;
}