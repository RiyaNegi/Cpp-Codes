#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numb=0,loop=0,value=0;
    cin>>numb;
    int array[numb];
    while( loop < numb)
    {
        cin>>value;
        array[loop]=value;
        loop++;
    }
     
    sort(array,array + numb);
    loop=0;
     while(loop<numb)
    {
        cout<<array[loop]<<endl;
        loop++;
    }
    return 0;
}