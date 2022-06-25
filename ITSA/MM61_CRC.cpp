#include <iostream>

using namespace std;

int find_solution(int &chi, int &rab, int crab, int leg);

int main()
{
    int num, leg, tail;
    cin >> num >> leg >> tail;
    int chi = 0, rab = tail, crab = num - tail;
    if (find_solution(chi, rab, crab, leg))
        cout << chi << " " << rab << " " << crab << endl;
    else
        cout << "No solution" << endl;
}

int find_solution(int &chi, int &rab, int crab, int leg)
{
    while (rab > -1)
    {
        if (rab * 4 + chi * 2 != leg - crab * 8)
        {
            rab--;
            chi++;
        }
        else
            return 1;
    }
    return 0;
}