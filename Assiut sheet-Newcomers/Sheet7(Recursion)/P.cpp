#include <iostream>
using namespace std;

void loog2(unsigned long long);
int main()
{
    unsigned long long n;
    cin >> n;
    loog2(n);
}

void loog2(unsigned long long n)
{
    static int exp;
    if (n == 1 || n == 0)
    {
        cout << exp;
        return;
    }
    exp++;
    loog2(n / 2);
}