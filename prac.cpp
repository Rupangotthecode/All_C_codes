#include<iostream>
using namespace std;
int main()
{
    int ar[]={1,9,10,22,12,32,19,3,2,91};
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
