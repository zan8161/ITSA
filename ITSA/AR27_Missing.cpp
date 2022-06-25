#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int h;
    cin >> h;
    cin.get();

    unsigned int arr[h];
    for (unsigned int i = 0; i < h; i++)
        arr[i] = 0;

    unsigned int number;
    while (cin >> number)
    {
        arr[number] = number;
    }

    for (int j = 0; j < h; j++)
    {
        if (arr[j] != j)
            printf("%d\n", j);
    }
}