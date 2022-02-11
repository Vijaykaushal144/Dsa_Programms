#include<iostream>
using namespace std;
int distinct(int a[],int n)
{
    int count=0;
    int i=0;
    int j=i+1;
    while(i<n)
    {
        if(a[i]!=a[j])
        {
            count++;
        }
        i++;

    }
    return count;
}
int main()
{
    int a[]={5,10,15,5,4,5};
    cout<<distinct(a,5);
}