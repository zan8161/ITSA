#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    while (getline(cin, input))
    {
        string::iterator ptr = input.begin();
        while (ptr != input.end())
        {
            if (islower(*ptr))
            {
                if (*ptr > 'm')
                    *ptr -= 26;
                *ptr += 13;
            }
            else if (isupper(*ptr))
            {
                if (*ptr > 'M')
                    *ptr -= 26;
                *ptr += 13;
            }
            ptr++;
        }
        cout << input << endl;
    }
}