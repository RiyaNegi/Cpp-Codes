#include<iostream>
using namespace std;
int main()
   {
       int t;
       cin>>t;
       while(t--)
       {
           int n,p,c=0;
           cin>>n;
           while(n)
           {
               p=n%10;
               if(p==4)
                  c++;
               n=n/10;
           }
           cout<<c<<"\n";
       }
   }