#include <iostream>
#include <string>
using namespace std;
void vow(string);
int main()
{
    string n;
    getline(cin, n);
    vow(n);
}
void vow(string s)
{
    static int n = 0;
    string sub;
    sub=s.substr(0,static_cast<int>(s.size())-1);
    if (static_cast<int>(s.size()) == 0)
    {
        cout << n;
        return;
    }
    if(s.back()=='a'||s.back()=='e'||s.back()=='i'||s.back()=='o'||s.back()=='u'||s.back()=='A'||s.back()=='E'||s.back()=='I'||s.back()=='O'||s.back()=='U')
    n++;
    vow(sub);
}