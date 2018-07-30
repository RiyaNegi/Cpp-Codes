#include<iostream>
#include<cmath>
using namespace std;

int sort(int x)
{
    int so=0,digit=0;
    so=x;
    while(so>0)
    {
        so=so/10;
        digit++;
    }
    cout<<endl<<":"<<digit;
    return digit;
}
int four(int a,int b)
{
    int count=0,i=0,abc=0,d=0;
    abc=a;
    while(i< b)
    {
        a=a/10;
        while(d<a)
        {
            abc=abc-pow(10,b-1);
            d++;
        }
       
        if(a==4 || a%4==0)
            count++;
        else if(abc==4)
            count++;
        i++;
    }
     cout<<endl<<" : "<<count<<endl;

}
int main()
{
    int t=0,n=0,r=0,digits=0;
    cin>> t;
    while(r<t)
    {
        cin>>n;
        digits = sort(n);
        four(n,digits);
        r++;
    }
    return 0;
}