#include <iostream>
#include <iomanip>
using namespace std;
void summ(long long int *, int);
int main()
{
    int n;
    cin >> n;
    long long int *arr = new long long int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    summ(arr, n - 1);
}
void summ(long long int *arr, int size)
{
    static long long  m=size+1,s = 0;

    if (size < 0)
    {
        double av=(double)s/(double)m;
        cout <<setprecision(6)<<fixed << showpoint<<av;
        return;
    }
    s+=arr[size];
    summ(arr, size - 1);
}