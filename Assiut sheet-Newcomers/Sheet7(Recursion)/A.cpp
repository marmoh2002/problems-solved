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
    cout << "I love Recursion\n";
    rec(n - 1);
}