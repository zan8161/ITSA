// Pseudo Random Numbers
#include <iostream>
#include <string>

using namespace std;

#define Found 1
#define Fail 0
//  formula : Xt = aXn + c mod m, t = n + 1.

int mod(int p, int modulus);
int Next_Number(int multiplier, int addend, int modulus, int Xn);
int PRN_sequence(int *seq, int multiplier, int addend, int modulus, int &i);

int main()
{
    int generate_times = 0;
    cin >> generate_times;
    int multiplier, addend, modulus, X;
    for (int time = 0; time < generate_times; time++)
    {
        cin >> multiplier >> addend >> modulus >> X;
        int seq[modulus];
        int j = 0;
        seq[0] = X;

        cout << PRN_sequence(seq, multiplier, addend, modulus, j) << endl;
    }
}

int mod(int p, int modulus)
{
    if (p >= modulus)
        return mod(p - modulus, modulus);
    else
        return p;
}

int Next_Number(int multiplier, int addend, int modulus, int Xn)
{
    int p = multiplier * Xn + addend;
    return mod(p, modulus);
}

int PRN_sequence(int *seq, int multiplier, int addend, int modulus, int &i)
{
    seq[i + 1] = Next_Number(multiplier, addend, modulus, seq[i]);
    i++;
    int match = Fail;
    int j;
    for (j = 0; j < i; j++)
    {
        if (seq[j] == seq[i])
        {
            match = Found;
            break;
        }
    }
    if (match == Fail)
        return PRN_sequence(seq, multiplier, addend, modulus, i);
    else
        return i - j;
}