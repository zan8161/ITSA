#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    int arr[n][n];
    for (unsigned int i = 0; i < n; i++)
        for (unsigned int j = 0; j < n; j++)
            cin >> arr[i][j];

    int trace = 0;
    for (unsigned int i = 0; i < n; i++)
        trace += arr[i][i];

    cout << trace << endl;
}