#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class elf
{
private:
    string name;
    string group;
    int hrs;

public:
    elf(string name, string group, int hrs) : name(name), group(group), hrs(hrs)
    { /*cout<<"Elf constructed, name is "<<name<<" group is "<<group<<" hrs is "<<hrs<<endl;*/
    }
    int getGroup()
    {
        if (group == "bonecos")
        {
            return 0;
        }
        else if (group == "arquitetos")
        {
            return 1;
        }
        else if (group == "musicos")
        {
            return 2;
        }
        else if (group == "desenhistas")
        {
            return 3;
        }
        else
            return 4;
    }
    int getHrs()
    {
        return hrs;
    }
};
void getelves(int, vector<elf> &);
vector<int> calc(int, vector<elf> &);
int result(vector<int> &);
int main()
{
    int N;
    cin >> N;
    vector<elf> data;
    getelves(N, data);
    vector<int> total_hours;
    total_hours = calc(N, data);
    cout << result(total_hours) << endl;
}
void getelves(int N, vector<elf> &data)
{
    for (int i = 0; i < N; ++i)
    {
        string E, G;
        int H;
        cin >> E >> G >> H;
        elf temp(E, G, H);
        data.push_back(temp);
    }
}
vector<int> calc(int N, vector<elf> &data)
{
    vector<int> temp(4, 0);
    for (int i = 0; i < N; ++i)
    {
        temp[data[i].getGroup()] += data[i].getHrs();
    }
    return temp;
}
int result(vector<int> &hrs)
{
    int P = 0;
    hrs[0] /= 8;
    hrs[1] /= 4;
    hrs[2] /= 6;
    hrs[3] /= 12;
    for (int i = 0; i < 4; ++i)
        P += hrs[i];
    return P;
}