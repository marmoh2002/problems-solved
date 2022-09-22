#include <iostream>

using namespace std;

unsigned int fib(int);
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}
unsigned int fib(int b)
{
    int f = 0;
    if (b == 1)
        return 0;
    else if (b == 2)
        return 1;
        // cout<<"calling fib("<<b-1<<")+fib("<<b-2<<")"<<endl;
    f = fib(b - 1) + fib(b - 2);
    return f;
}