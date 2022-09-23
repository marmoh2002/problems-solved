#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int return_max(vector<int>);
int get_ind(vector<int> &, int);
int main()
{
    vector<int> ans;
    while (1)
    {
        vector<int> v;
        int N = 1;
        cin >> N;
        if (N == 0)
            break;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        ans.push_back(1+get_ind(v, return_max(v)));
    }
    for (int i = 0; i < static_cast<int>(ans.size()); ++i)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
int return_max(vector<int> v)
{
    sort(v.begin(), v.end());
    return v[v.size() - 2];
}
int get_ind(vector<int> &v, int sus)
{
    auto it = find(v.begin(), v.end(), sus);
    if (it != v.end())
        return it - v.begin();
    else
    {
        return -1;
    }
}