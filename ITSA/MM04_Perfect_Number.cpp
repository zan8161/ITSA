#include <iostream>

using namespace std;

int main()
{
    long long number;
    unsigned int times = 0;
    cin >> times;
    for (unsigned int i = 0; i < times; i++)
    {
        cin >> number;
        long long sum = 1;
        long long j;
        for (j = 2; j * j < number; j++)
        {
            if (number % j == 0)
            {
                sum += j;
                if (j * j != number)
                    sum += number / j;
            }
        }
        if (sum == number)
            cout << "perfect" << endl;
        else
            cout << "nonperfect" << endl;
    }
}