#include <iostream>
using namespace std;

unsigned long long comb(int n, int r);

int main()
{
    int n, r;
    cin >> n >> r;
    cout << comb(n, r);
}

unsigned long long comb(int n, int r)
{
    if (n < r)
    {
        return 0;
    }
    if (r == 0)
    {
        return 1;
    }
    if (r == 1)
    {
        return n;
    }
    if (n == 1)
    {
        return 1;
    }
    return comb(n - 1, r - 1) + comb(n - 1, r);
}