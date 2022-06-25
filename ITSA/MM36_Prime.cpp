#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    while (cin >> n && n)
    {
        unsigned int count = 0;
        unsigned int match = 1;

        for (unsigned int i = n - 1; i > 1; i--)
        {
            match = 1;
            for (unsigned int j = sqrt(i); j > 1; j--)
            {
                if (j == 1)
                    break;
                if (!(i % j))
                {

                    match = 0;
                    break;
                }
            }
            if (!match)
                continue;
            else
                count++;
        }

        cout << count << endl;
    }
}