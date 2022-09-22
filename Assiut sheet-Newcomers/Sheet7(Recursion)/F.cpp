#include <iostream>
#include <vector>
using namespace std;

void even(vector<long long> &, int);
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    even(v, static_cast<int>(v.size()) - 1);
}
void even(vector<long long> &v, int n)
{
    if (n < 0)
        return;
    if (n == 0)
    {
        cout << v[n] << " ";
        return;
    }
    if (n % 2 == 0)
    {
        cout << v[n] << " ";
        even(v, n - 2);
    }
    else
        even(v, n - 1);
}