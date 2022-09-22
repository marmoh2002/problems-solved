#include <iostream>
#include <vector>
using namespace std;

void isPal(vector<unsigned long long int> &, int, int);

int main()
{
    int c;
    cin >> c;
    vector<unsigned long long int> a;
    for (int i = 0; i < c; ++i)
    {
        unsigned long long int z;
        cin >> z;
        a.push_back(z);
    }
    isPal(a, 0, static_cast<int>(a.size()) - 1);
}
void isPal(vector<unsigned long long int> &v, int s, int e)
{
    if (s == e || s > e)
    {
        cout << "YES";
        return;
    }
    if (v[s] == v[e])
        isPal(v, s + 1, e - 1);
    else
    {
        cout << "NO";
        return;
    }
}
