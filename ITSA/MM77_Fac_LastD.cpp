#include <iomanip>
#include <iostream>

using namespace std;

long long fac(int n);
long long fac_lastdig(int n);
void precision_5(long long &i);

int main()
{
    unsigned int j;
    scanf("%d", &j);
    if (j > 123)
        cout << "40313" << endl;
    else
        cout << fac_lastdig(j) << endl;
}

long long fac(int n)
{
    long long k = 1;
    for (int i = 1; i <= n; i++)
    {
        k *= i;
        precision_5(k);
    }
    return k;
}

long long fac_lastdig(int n)
{
    long long j = 0;
    for (int i = 1; i <= n; i++)
    {
        j += fac(i);
        precision_5(j);
    }
    return j;
}

void precision_5(long long &i)
{
    if (i > 100000)
        i = (i % 100000);
}