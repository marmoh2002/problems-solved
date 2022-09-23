#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    unsigned long int N, num = 1, sum = 0;
    int fr = 1;
    vector<int> g;
    cin >> N;
    for (unsigned long int i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        g.push_back(t);
    }
    sort(g.begin(), g.end());
    for (unsigned long int i = 0; i < N; i++)
    {
        if (g[i] == g[i + 1])
        {
            num++;
        }
        else
        {
            sum += num * fr;
            num = 1;
            fr++;
        }
    }
    cout << sum << endl;
    return 0;
}

// 3
// 1 1 1 4 4 5
