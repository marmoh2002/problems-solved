#include <iostream>
#include <vector>
#include <string>
using namespace std;

void rec(string&);
void sendin(int, vector<string> &);
void l(int, vector<string> &);

int main()
{
    int t;
    vector<string> v;
    cin >> t;
    l(t, v);
    sendin(0, v);
}
void l(int t, vector<string> &v)
{
    string n;
    if (t == 0)
        return;
    cin >> n;
    v.push_back(n);
    l(t - 1, v);
}
void sendin(int t, vector<string> &v)
{
    if (t == v.size())
        return;
    // cout<<"sent v["<<t<<"] is "<<v[t]<<endl;
    rec(v[t]);
    cout << endl;
    sendin(t + 1, v);
}
void rec(string& n)
{
    if (n == "")
        return;
    string sub=n.substr(0,n.size()-1);
    rec(sub);
    cout << n.back() << " ";
}