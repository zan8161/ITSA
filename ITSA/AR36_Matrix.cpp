#include <iostream>

using namespace std;

void reverse();

int main()
{
    unsigned int n, m, c;
    cin >> n >> m >> c;
    int m1[n][m];
    int m2[n][m];

    for (unsigned int i = 0; i < n; i++)
        for (unsigned int j = 0; j < m; j++)
            cin >> m1[i][j];

    for (unsigned int i = 0; i < n; i++)
        for (unsigned int j = 0; j < m; j++)
            cin >> m2[i][j];

    int m3[m][n];
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            m3[i][j] = (m1[j][i] + m2[j][i]) * c;

    for (unsigned int j = 0; j < m; j++)
    {
        for (unsigned int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << m3[j][i];
                break;
            }
            cout << m3[j][i] << " ";
        }
        cout << endl;
    }
}