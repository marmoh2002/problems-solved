#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int N;
    double X, Y;
    cin >> N;
    vector<pair<double, double>> v;
    for (int i = 0; i < N; ++i)
    {
        cin >> X >> Y;
        v.push_back(make_pair(X, Y));
    }
    for (int i = 0; i < N; ++i)
    {
        if (v[i].second == 0)
            cout << "divisao impossivel" << endl;
        else if(v[i].first==0 && v[i].second<0)
        {
            printf("%0.1f\n",0);
        }
        else
            printf("%0.1f\n", v[i].first / v[i].second);
    }
    return 0;
}