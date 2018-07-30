#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
    int numb=0,loop=0,value=0,a=0;
    cin>>numb;
    int array[numb];
    while( loop < numb)
    {
        cin>>value;
        array[loop]=value;
        loop++;
    }
    if(array[0]>array[1])
    {
        int temp=0;
        temp=array[0];
        array[0]=array[1];
        array[1]=temp;
    }


    for(int i=0; i<numb; i++)
    {
        for(int j=0; j<numb; j++)
       { 
           if (array[i]<array[j])
            {
                int temp=0;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
       }
    }
     while(a<numb)
    {
        cout<<array[a]<<endl;
        a++;
    }
    return 0;

}