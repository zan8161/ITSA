#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#define MaxInputLen 128
//  L = substring's minimal length(it should be greater)
//  it means, if the next is C or G, substring should be extend to larger size.

//  example : 5 agGCTGCAatGACAGTTGGG
//  we can find substring "gGCTG", and its next is 'C', so we should extend substring to "gGCTGC", then its density is 5/6.

double isCG(string::iterator it)
{
    if (tolower(*it) == 'c' || tolower(*it) == 'g')
        return 1;
    return 0;
}

double density(string::iterator range_1, string::iterator range_2)
{
    string::iterator it = range_1;
    double _density = 0;
    double DNAcount = 0;
    double CGcount = 0;

    for (; it != range_2; it++)
    {
        DNAcount++;
        if (isCG(it))
            CGcount++;
        _density = CGcount / DNAcount;
    }

    return _density;
}

double FindMaxDensity(int Len, string DNAstr)
{
    string::iterator it = DNAstr.begin();
    double maxdensity = 0;
    for (;; it++)
    {
        string::iterator it1 = it + Len;
        for (;; it1++)
        {
            if (maxdensity < density(it, it1))
                maxdensity = density(it, it1);
            if (it1 == DNAstr.end())
                break;
        }
        if (it == DNAstr.end() - Len)
            break;
    }
    return maxdensity;
}

int main()
{
    string input;
    int Len;

    while (cin >> Len >> input)
        cout << fixed << setprecision(3) << FindMaxDensity(Len, input) << endl;
}