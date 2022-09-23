#include <iostream>
#include <vector>
using namespace std;
void move(vector<vector<int>> &, int, int);
int main()
{
    int W, H, indi, indj;
    cin >> W >> H;
    vector<vector<char>> v;
    vector<vector<int>> z(H);
    for (int i = 0; i < H; ++i)
    {
        vector<char> t;
        char temp;
        for (int j = 0; j < W; ++j)
        {
            cin >> temp;
            t.push_back(temp);
            if (temp == 'P')
            {
                z[i].push_back(1);
                indi = i;
                indj = j;
            }
            else if (temp == '#')
                z[i].push_back(-2);
            else if (temp == 'T')
                z[i].push_back(-1);
            else if (temp == '.' || temp == 'G')
                z[i].push_back(0);
        }
        v.push_back(t);
    }
    move(z, indi, indj);
    int score = 0;
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (z[i][j] == 1 && v[i][j] == 'G')
                score++;
        }
    }
    cout << score << endl;
    return 0;
}
void move(vector<vector<int>> &zz, int ii, int jj)
{
    if (zz[ii][jj] == -2)
        return;
    if (zz[ii][jj] == 1)
    {

        if (zz[ii + 1][jj] == -1 || zz[ii - 1][jj] == -1 || zz[ii][jj + 1] == -1 || zz[ii][jj - 1] == -1)
            return;
        if (zz[ii + 1][jj] == 0)
        {
            zz[ii + 1][jj] = 1;
            move(zz, ii + 1, jj);
        }
        if (zz[ii - 1][jj] == 0)
        {
            zz[ii - 1][jj] = 1;
            move(zz, ii - 1, jj);
        }
        if (zz[ii][jj + 1] == 0)
        {
            zz[ii][jj + 1] = 1;
            move(zz, ii, jj + 1);
        }
        if (zz[ii][jj - 1] == 0)
        {
            zz[ii][jj - 1] = 1;
            move(zz, ii, jj - 1);
        }
    }
}
