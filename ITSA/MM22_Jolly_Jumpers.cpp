#include <iostream>
#define swap(x, y) \
    int temp = x;  \
    x = y;         \
    y = temp;

using namespace std;

void computediff(int *diff, int *arr, int n);
void insertionsort(int *diff, int n);
int judge(int *diff, int n);

int main()
{
    unsigned int time;
    int diff[4096] = {0};
    int arr[4096] = {0};
    while (cin >> time)
    {
        for (int i = 0; i < time; i++)
            cin >> arr[i];

        computediff(diff, arr, time);

        if (judge(diff, time))
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}

void computediff(int *diff, int *arr, int n)
{
    for (int i = 1; i < n; i++)
        diff[i - 1] = abs(arr[i] - arr[i - 1]);
    insertionsort(diff, n);
}

void insertionsort(int *diff, int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && diff[j] < diff[j - 1])
        {
            swap(diff[j], diff[j - 1]);
            j--;
        }
    }
}

int judge(int *diff, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (diff[i - 1] != i)
            return 0;
    }
    return 1;
}