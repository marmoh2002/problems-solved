#include <iostream>
using namespace std;
void fact(int);
int main()
{
    int n;
    cin >> n;
    fact(n);
}
void fact(int n)
{
    static unsigned long long int f = 1;
    if (n == 1 || n == 0)
    {
        cout << f;
        return;
    }
    f*=n;
    fact(n - 1);
}