#include<iostream>
using namespace std ;
void insertion_sort(int a[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        int v=a[i];
        int j=i;
        while(v<a[j-1] &&j>=1)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=v;
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int ar[]={4,3,7,5,1,32};
    insertion_sort(ar,7);
}