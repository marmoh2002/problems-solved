#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int N;
    vector<int> v;
    cin >> N;
    while (N--)
    {
        int K, t;
        cin >> K;
        while (K--)
        {
            cin >> t;
            v.push_back(t);
        }
    }
    for (int i = 0; i < static_cast<int>(v.size()); i++)
    {
        if (v[i] == 1)
            cout << "Rolien\n";
        else if (v[i] == 2)
            cout << "Naej\n";
        else if (v[i] == 3)
            cout << "Elehcim\n";
        else if (v[i] == 4)
            cout << "Odranoel\n";
    }
    return 0;
}