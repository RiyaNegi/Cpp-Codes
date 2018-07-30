#include<iostream>
using namespace std;


long long int factorial(int a)
{
     long long fact=1;
    for( int i=a; i>=1; i--)
    {
        fact=i*fact;
    }
    return fact;
}
int main()
{
    
    ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
    int t,n,b=0,c=0,r=0;
    cin>>t;
    int x[t];
    while(r<t)
    {
        cin>>n;
        x[c]=factorial(n);
        c++;
        r++;
    }
    while(b<t)
    {
        cout<<x[b]<<endl;
        b++;
    }
    return 0;
}

