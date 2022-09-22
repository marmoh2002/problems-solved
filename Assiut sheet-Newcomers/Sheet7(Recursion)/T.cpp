#include <iostream>
using namespace std;
unsigned long int fact(int);
int main()
{
    int n,r;
    cin >> n >>r;
    int c=fact(n);
    cout<<c;
}
unsigned long int fact(int n)
{
    static unsigned long long int f = 1;
    cout<<"f is "<<f<<endl;
    if (n == 1 || n == 0)
    {
        return f;
    }
    f*=n;
    return fact(n - 1);
}