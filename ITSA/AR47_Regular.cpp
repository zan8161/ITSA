#include <iostream>

using namespace std;

int main()
{
    long long a;
    cin >> a;
    while (!(a % 2))
        a = a / 2;
    while (!(a % 3))
        a = a / 3;
    while (!(a % 5))
        a = a / 5;
    if (a == 1)
        cout << "Regular number!" << endl;
    else
        cout << "Irregular number!" << endl;
}