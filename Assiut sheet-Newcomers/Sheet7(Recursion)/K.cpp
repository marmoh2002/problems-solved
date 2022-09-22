#include <iostream>

using namespace std;
void max(int *, int);
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    max(arr, n - 1);
}
void max(int *arr, int size)
{
    static int m = arr[size];
    if (size == 0)
    {
        cout << m;
        return;
    }
    if (m < arr[size - 1])
        m = arr[size - 1];
    max(arr, size - 1);
}