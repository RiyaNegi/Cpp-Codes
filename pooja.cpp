#include<iostream>
using namespace std;

int main()
{
    int amount=0;
    double total=0;
    double cash=0;
    cin>>amount>>cash;
    cash-=0.5;
    if(amount%5==0 && amount<=cash)
    {
        total=(cash-amount);
        cout<<endl<<total<<endl;
    }
    else
    {
        cout<<cash+0.5<<endl;
    }
    return 0;
}

