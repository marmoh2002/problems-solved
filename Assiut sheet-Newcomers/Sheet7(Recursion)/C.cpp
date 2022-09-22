#include <iostream>
using namespace std;
void rec(int);
int main()
{
    int n;
    cin >> n;
    rec(n);
}
void rec(int n)
{
    if (n == 1)
    {
        cout << n;
        return;
    }
    cout << n << ' ';
    rec(n - 1);
}