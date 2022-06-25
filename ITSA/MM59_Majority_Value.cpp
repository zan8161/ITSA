#include <iostream>

using namespace std;

int main()
{
    int arr[1024] = {0};
    int input;
    int count = 0;
    while (cin >> input)
    {
        arr[input]++;
        count++;
    }
    int mark = 0;
    int num = 0;
    for (int j = 0; j < 1024; j++)
    {
        if (num < arr[j])
        {
            num = arr[j];
            mark = j;
        }
    }
    int repeat = 0;
    for (unsigned int j = 0; j < 1024; j++)
    {
        if (arr[j] == num)
            repeat++;
    }
    if (repeat == 1 && num >= count / 2)
        cout << "Majority is " << mark << endl;
    else
        cout << "No Majority" << endl;
}
