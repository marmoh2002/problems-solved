#include <iostream>
#include <stdio.h>
using namespace std;

double fr(int pre);

int main()
{

    int p = 0;
    cin >> p;
    printf("%0.10f\n",3+fr(p));
    return 0;
}

double fr(int pre)
{
    static double a;
    if (pre == 0)
        return 1 / 6;
    else
    {
        a = 1 / (6 + fr(--pre));
        return a;
    }
}