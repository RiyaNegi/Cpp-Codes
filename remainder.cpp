#include<iostream>
using namespace std;
int main()
{
    float a=0.0,b=0.0,c=0.0;
    int t=0,n=0;
    cin>> n;
    float arr[n];
    while(t<n)
    {
        cin>>a>>b;
        double result = a;
        while(result - b >= 0)
        { 
        result -= b;
        }
        arr[t]=result;
        t++;
    }
    for(int i=0; i<n ; i++)
        cout<<endl<<arr[i];
    return 0;
}