#include <iostream>

using namespace std;

void nn(int);
int main()
{
    int n;
    cin >> n;
    nn(n);
}
void nn(int b)
{
    static int count = 0;
    if(b == 0)
    {
        cout << count;
        return;
    }
    if (b == 1)
    {
        cout << ++count;
        return;
    }
    if (b % 2)
    {
        count++;
        nn((3 * b) + 1);
    }
    else
    {
        count++;
        nn(b / 2);
    }
}