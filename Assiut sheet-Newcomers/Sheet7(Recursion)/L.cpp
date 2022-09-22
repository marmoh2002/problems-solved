#include <iostream>

using namespace std;
void max(long long int *, int);
int main()
{
    int n;
    cin >> n;
    long long int *arr = new long long int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    max(arr, n - 1);
}
void max(long long int *arr, int size)
{
    static long long  m = 0;

    if (size < 0)
    {
        cout << m;
        return;
    }
    m+=arr[size];
    max(arr, size - 1);
}