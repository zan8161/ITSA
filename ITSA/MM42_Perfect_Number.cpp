#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class PerfectNumber_list
{
public:
    PerfectNumber_list()
    {
        PerfectNumber = {6,
                         28,
                         496,
                         8128,
                         33550336,
                         8589869056,
                         137438691328};
    }

    void print(long long i)
    {
        if (i < 6)
            return;

        vector<long long>::iterator it = PerfectNumber.begin();
        while (*it <= i)
        {
            cout << *it << " ";
            it++;
        }
        cout << "is perfect number" << endl;
    }

private:
    vector<long long> PerfectNumber;
};

int main()
{
    long long n;
    cin >> n;
    PerfectNumber_list list;
    list.print(n);
}