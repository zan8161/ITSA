#include <iostream>

using namespace std;

double min(double *arr, unsigned int time)
{
    double m = arr[0];
    for (unsigned int i = 0; i < time; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    return m;
}

double surface(double lenght, double width, double depth)
{
    return lenght * width * 2 + lenght * depth * 2 + width * depth * 2;
}

double volume(double lenght, double width, double depth)
{
    return lenght * width * depth;
}

int maxdiv(int a, int b)
{
    if (!b)
        return a;
    return maxdiv(b, a % b);
}

int main()
{
    unsigned int time;
    cin >> time;
    double surf[time];
    double volu[time];
    double len, wid, dep;
    double rat[time];
    for (int i = 0; i < time; i++)
    {
        cin >> len >> wid >> dep;
        surf[i] = surface(len, wid, dep);
        volu[i] = volume(len, wid, dep);
        rat[i] = surf[i] / volu[i];
    }
    double minrat = min(rat, time);
    unsigned int j = 0;
    for (unsigned int i = 0; i < time; i++)
    {
        if (rat[i] == minrat)
        {
            j = i;
            break;
        }
    }
    cout << surf[j] / maxdiv(surf[j], volu[j]) << "/" << volu[j] / maxdiv(surf[j], volu[j]) << endl;
}