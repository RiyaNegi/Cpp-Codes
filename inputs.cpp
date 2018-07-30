#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,k,t,x,div=0;
    cin>>n>>k;
    while(x<n)
    {
        cin>>t;
        x++;
        if(t%k==0)
        {
            div++;
        }
    }
    cout<<div;
    return 0;
}