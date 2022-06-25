#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string input;
    while (cin >> input)
    {
        int tail = input.length() - 1;
        int h = 0;
        for (int i = 0; i < input.length() / 2; i++)
        {
            if (input[i] != input[tail--])
            {
                h = 1;
                break;
            }
        }
        if (h == 1)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}