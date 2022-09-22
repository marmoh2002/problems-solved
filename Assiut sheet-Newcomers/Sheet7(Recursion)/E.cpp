#include <iostream>
#include <vector>
#include <string>

using namespace std;

void base(unsigned long &,string&);
void fill(int, vector<unsigned long> &);
void send(int, vector<unsigned long> &);
int main()
{
    int n;
    cin >> n;
    vector<unsigned long> v;
    fill(n, v);
    send(0, v);
}
void fill(int n, vector<unsigned long> &v)
{
    if (n == 0)
        return;
    unsigned long z;
    cin >> z;
    v.push_back(z);
    fill(n - 1, v);
}
void send(int n, vector<unsigned long> &v)
{
    if (n == v.size())
        return;
    string s="";
    base(v[n],s);

    cout <<s<< endl;
    send(n + 1, v);
}
void base(unsigned long &num,string& s)
{
    unsigned long n = 0;
    if (num == 0)
    {
        
        return;
    }
    unsigned long z = num / 2;
    base(z,s);
    s += to_string(num % 2);

}

// 10/2   0
// 5/2    1
// 2/2    0
// 1/2    1