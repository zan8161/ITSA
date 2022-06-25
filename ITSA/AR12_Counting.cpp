#include <iostream>

using namespace std;

int main()
{
    int arr[100] = {0};
    int cnt[100] = {0};
    int k = 1;
    int j;
    cin >> arr[0];
    cnt[0] = 1;
    while (cin >> j)
    {
        if (j == -999)
            break;
        int m = 0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] == j)
            {
                cnt[i]++;
                m++;
                break;
            }
        }
        if (m == 0)
        {
            arr[k++] = j;
            cnt[k - 1] += 1;
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                tmp = cnt[i];
                cnt[i] = cnt[j];
                cnt[j] = tmp;
            }
        }
    }
    for (int i = 0; i < k; i++)
        cout << arr[i] << " " << cnt[i] << endl;
}
