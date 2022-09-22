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
    if (n == 0)
        return;
    rec(n - 1);
    cout << n << endl;
}