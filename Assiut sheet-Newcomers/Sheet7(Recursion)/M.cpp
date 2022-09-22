#include <iostream>

using namespace std;
void max(long long int *, int, int);
int main()
{
    int n, m;
    cin >> n >> m;
    long long int *arr = new long long int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    max(arr, n - 1, m);
}
void max(long long int *arr, int size, int suff)
{
    static long long m = 0;

    if (size < size-suff+1)
    {
        cout << m;
        return;
    }
    m += arr[size];
    max(arr, size - 1,suff-1);
}
// 10 10
// 1 2 3 4 5 6 7 8 9 10