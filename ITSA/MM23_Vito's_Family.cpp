#include <iostream>

using namespace std;

int mindis(int *arr, int *dis, int n);
void ini(int *dis, int n);

int main()
{
    unsigned int time;
    cin >> time;
    int arr[512] = {0};
    int dis[512] = {0};
    for (unsigned int i = 0; i < time; i++)
    {
        unsigned int j = 0;
        unsigned int n;
        cin >> n;

        while (j < n)
            cin >> arr[j++];

        cout << mindis(arr, dis, j) << endl;

        ini(dis, j);
    }
}

int mindis(int *arr, int *dis, int n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        for (unsigned int j = 0; j < n; j++)
            dis[i] += abs(arr[i] - arr[j]);
    }

    int min = dis[0];
    for (unsigned int i = 0; i < n; i++)
        if (min > dis[i])
            min = dis[i];

    return min;
}

void ini(int *dis, int n)
{
    for (unsigned int i = 0; i < n; i++)
        dis[i] = 0;
}