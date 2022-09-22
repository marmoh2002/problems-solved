// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include <iostream>
#include <vector>
using namespace std;

void p(vector<vector<int>> &, vector<vector<int>> &, int, int);
void sumcol(vector<vector<int>> &, vector<vector<int>> &, int, int);

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r);
    vector<vector<int>> b(r);
    for (int i = 0; i < r; ++i)
    {
        int z;
        for (int j = 0; j < c; ++j)
        {
            cin >> z;
            a[i].push_back(z);
        }
    }
    for (int i = 0; i < r; ++i)
    {
        int z;
        for (int j = 0; j < c; ++j)
        {
            cin >> z;
            b[i].push_back(z);
        }
    }
    p(a, b, r - 1, c - 1);
}
void p(vector<vector<int>> &a, vector<vector<int>> &b, int r, int c)
{
    if (r == 0)
    {
        sumcol(a, b, 0, c);
        return;
    }
    p(a, b, r - 1, c);
    cout << endl;
    sumcol(a, b, r, c);
}
void sumcol(vector<vector<int>> &a, vector<vector<int>> &b, int r, int c)
{
    if (c == 0)
    {
        cout << a[r][0] + b[r][0];
        return;
    }
    sumcol(a, b, r, c - 1);
    cout << " " << a[r][c] + b[r][c];
}