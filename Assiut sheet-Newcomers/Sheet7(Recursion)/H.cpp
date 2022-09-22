#include <iostream>

using namespace std;

void p(int,int);
void star(int);
void starr(int);
void space(int);

int main()
{
    int n;
    cin >> n;
    p(n,0);
}
void space(int s)
{
    if(s==0) return;
    cout<<" ";
    space(s-1);
}
void star(int s)
{
    if(s==0) return;
    cout<<"*";
    star(s-1);
}
void starr(int s)
{
    if(s==0)return;
    star(s-1);
    cout<<"*";
}
void p(int n,int k)
{
    if(n==0) return;
    p(n-1,k+1);
    space(n-1);
    star(k+1);
    starr(k);
    cout<<endl;
    
}