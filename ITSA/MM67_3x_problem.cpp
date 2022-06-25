#include <iostream>

using namespace std;

int Count(int n);
int cx(int n);

int main()
{
    unsigned int times;
    cin >> times;
    for (unsigned int i = 0; i < times; i++)
    {
        int input;
        cin >> input;
        cout << Count(input) << endl;
    }
}

int cx(int n)
{
    if (!(n % 2))
        return n / 2;
    return 3 * n + 1;
}

int Count(int n)
{
    if (n == 1)
        return 1;
    int count = 0;
    int tmp = n;
    while (tmp != 1)
    {
        tmp = cx(tmp);
        count++;
    }
    return count;
}