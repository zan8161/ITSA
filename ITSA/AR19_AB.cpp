#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    long long k;
    while (cin >> k)
    {
        long long e = 1;
        for (long long i = sqrt(k); i > 1; i--)
        {
            long long j = i * i;
            if (!(k % j))
            {
                e = i;
                break;
            }
        }
        long long t = (long long)(k / (e * e));
        cout
            << k << " = " << t << "*" << e << "^2" << endl;
    }
}