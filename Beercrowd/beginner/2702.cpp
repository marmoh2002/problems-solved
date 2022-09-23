#include <iostream>
 
using namespace std;
 
int main() {
 
   int ca,ba,pa,cr,br,pr,num=0;
   cin>>ca>>ba>>pa;
   cin>>cr>>br>>pr;
   if(cr>ca || br>ba || pr>pa)
   {
       if(cr>ca)
       num+=cr-ca;
       if(br>ba)
       num+=br-ba;
       if(pr>pa)
       num+=pr-pa;
   }
   cout<<num<<endl;
    return 0;
}