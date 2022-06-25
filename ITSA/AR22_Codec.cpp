#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    while (cin >> input)
    {
        string::iterator ptr = input.begin();
        while (ptr != input.end())
        {
            *ptr -= 3;
            ptr++;
        }
        cout << input << endl;
    }
}