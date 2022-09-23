#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    char N;
    string D;
    cin >> N >> D;
    vector<pair<char, string>> v;
    vector<string> res;
    while (N != '0' || D != "0")
    {
        v.push_back(make_pair(N, D));
        cin >> N >> D;
    }
    for (int i = 0; i < static_cast<int>(v.size()); ++i)
    {
        string temp = "";
        bool isZero = false;
        for (int j = 0; j < static_cast<int>(v[i].second.size()); j++)
        {
            if (v[i].second[j] != v[i].first)
            {
                if (v[i].second[j] == '0')
                {
                    isZero = true;
                }
                else
                {
                    isZero = false;
                }
                temp += v[i].second[j];
            }
        }
        if (isZero)
            res.push_back("0");
        else
        {
            res.push_back(temp);
        }
        unsigned long long ress = 0;
        for (int p = 0; p < static_cast<int>(res[i].size()); p++)
        {
            string s;
            s[0] = res[i][p];
            ress *= 10;
            ress += stoi(s);
        }
        cout << res[i] << endl;
    }
}
// 5 5000000
// 3 123456
// 9 23454324543423
// 9 99999999991999999
// 7 777
// 0 0

// 0
// 12456
// 23454324543423
// 1
// 0

// 0
// 12456
// 23454324543423
// 1
// 0