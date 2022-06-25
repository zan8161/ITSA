#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string substr;
    while (cin >> substr >> str)
    {
        unsigned int time = 0;
        unsigned int location = 0;
        while (str.find(substr, location) != string::npos)
        {
            time++;
            location = str.find(substr, location) + 1;
        }
        cout << time << endl;
    }
}