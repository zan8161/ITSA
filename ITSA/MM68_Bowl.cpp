#include <iostream>

using namespace std;

unsigned int maxdiv(unsigned int a, unsigned int b);
unsigned int bottle_vol(unsigned int a, unsigned int b, unsigned int L, unsigned int *arr, unsigned int maxdiv);

int main()
{
    unsigned int a, b, L;
    while (cin >> a >> b >> L)
    {
        unsigned int arr[1024] = {0};
        unsigned int t = maxdiv(a, b);
        cout << bottle_vol(a, b, L, arr, t) << endl;
    }
}

unsigned int maxdiv(unsigned int a, unsigned int b)
{
    if (!b)
        return a;
    return maxdiv(b, a % b);
}

unsigned int bottle_vol(unsigned int a, unsigned int b, unsigned int L, unsigned *arr, unsigned int maxdiv)
{
    unsigned int j = 0;
    for (unsigned int i = 1; i <= maxdiv; i++)
    {
        if (!(a % i) && !(b % i))
            arr[j++] = i;
    }

    j--;
    while (arr[j] > L)
        j--;

    return arr[j];
}