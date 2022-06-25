#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned int m, n;
    cin >> m >> n;
    cin.get();
    unsigned int c;
    unsigned int boi = 0, gurl = 0;
    for (unsigned int i = 0; i < m * n; i++)
    {
        scanf("%d", &c);

        if (c == 0)
            gurl++;
        else if (c == 1)
            boi++;
    }

    if (gurl > boi)
        cout << "0" << endl;
    else if (gurl < boi)
        cout << "1" << endl;
    else if (gurl == boi)
        cout << "2" << endl;
}