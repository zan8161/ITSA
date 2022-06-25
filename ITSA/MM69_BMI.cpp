#include <iomanip>
#include <iostream>

using namespace std;

double BMI(double height, double weight);
void Status(double _BMI);

int main()
{
    double height, weight;
    cin >> height >> weight;
    double _BMI = BMI(height, weight);
    Status(_BMI);
}

double BMI(double height, double weight)
{
    double a = height / 100;
    return weight / (a * a);
}

void Status(double _BMI)
{
    cout << fixed << setprecision(1) << _BMI;

    if (_BMI < 18.5)
        cout << " underweight" << endl;
    else if (_BMI >= 18.5 && _BMI < 24)
        cout << " normal" << endl;
    else if (_BMI >= 24 && _BMI < 27)
        cout << " overweight" << endl;
    else if (_BMI >= 27 && _BMI < 30)
        cout << " mild obesity" << endl;
    else if (_BMI >= 30 && _BMI < 35)
        cout << " moderate obesity" << endl;
    else
        cout << " severe obesity" << endl;
}