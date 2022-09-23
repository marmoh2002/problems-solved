#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    unsigned long long D;
    cin >> N >> D;
    vector<pair<int, unsigned long long>> v;
    while (N != 0 || D != 0)
    {
        v.push_back(make_pair(N, D));
        cin >> N >> D;
    }
    vector<unsigned long long> res(v.size(), 0);
    for (int i = 0; i < static_cast<int>(v.size()); ++i)
    {
        unsigned long long j = 1;
        while (v[i].second)
        {
            int rem = v[i].second % 10;
            if (rem != v[i].first)
            {
                res[i] += (rem * j);
                j *= 10;
            }
            v[i].second /= 10;
        }
    }
    for (int i = 0; i < static_cast<int>(res.size()); ++i)
    {
        cout << res[i] << endl;
    }
}