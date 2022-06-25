#include <iostream>

using namespace std;

unsigned int ComputeOdd(unsigned int lower_bound, unsigned int upper_bound);

int main()
{
    unsigned int Range_1, Range_2;
    while (cin >> Range_1 >> Range_2)
        cout << ComputeOdd(Range_1, Range_2) << endl;
}

unsigned int ComputeOdd(unsigned int lower_bound, unsigned int upper_bound)
{
    unsigned int sum = 0;
    for (unsigned int num = lower_bound; num <= upper_bound; num++)
        if ((num % 2))
            sum += num;

    return sum;
}