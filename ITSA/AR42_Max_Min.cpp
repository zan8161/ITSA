#include <iostream>

using namespace std;

int max(int *arr, int time);
int min(int *arr, int time);

int main()
{
    int arr[10] = {0};
    int c;
    for (int i = 0; i < 10; i++)
    {
        cin >> c;
        arr[i] = c;
    }
    cout << "Largest number = " << max(arr, 10) << endl;
    cout << "Smallest number = " << min(arr, 10) << endl;
}

int max(int *arr, int time)
{
    int m = 0;
    for (int i = 0; i < time; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    return m;
}

int min(int *arr, int time)
{
    int m = arr[0];
    for (int i = 0; i < time; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    return m;
}