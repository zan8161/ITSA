#include <iostream>

using namespace std;

unsigned int fac(unsigned int n);

int main()
{
    unsigned int times;
    unsigned int n;
    cin >> times;
    for (unsigned int i = 0; i < times; i++)
    {
        cin >> n;
        if (!n)
            cout << "1" << endl;
        else
            cout << fac(n) << endl;
    }
}

unsigned int fac(unsigned int n)
{
    if (n == 1)
        return n;
    else
        return fac(n - 1) * n;
}