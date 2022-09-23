#include <iostream>
#include <map>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    int N, M, tab=0;
    string s;
    cin >> N >> M;
    tab=N;
    map<string, int> m;
    vector<string> v;
    m = {{"fechou", 0},
         {"clicou", 1}};
    for (int i = 0; i < M; ++i)
    {
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < M; ++i)
    {
        if (m[v[i]] == 0)
        {
            tab+=1;
        }
        else
        {
            tab--;
        }
    }
    cout<<tab<<endl;
    return 0;
}