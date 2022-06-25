#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string input;
    unsigned int NumNA = 0;
    unsigned int location = 0;
    vector<unsigned int> NA_location;
    unsigned int Appeartimes = 0;

    while (cin >> input)
    {
        if (input == "NA")
        {
            Appeartimes++;
            NumNA++;
            NA_location.push_back(location);
        }
        location++;
    }

    cout << NumNA << endl;
    for (vector<unsigned int>::iterator it = NA_location.begin(); it != NA_location.end(); it++)
        cout << *it << endl;
}
