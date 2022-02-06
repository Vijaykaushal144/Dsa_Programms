#include<iostream>
using namespace std;
void  s(int a1[],int a2[],int m,int n)
{   
    int a3[m+n];
    int k=0;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a1[i]<a2[j])
        {
            a3[k++]=a1[i++];
        
        }
        else
        {
            a3[k++]=a2[j++];
        }
    }
    while(i<m)
    {
        a3[k++]=a1[i++];
    }
    while(j<n)
    {
        a3[k++]=a2[j++];
    }
    
    for(int p=0;p<(m+n);p++)
    {
        cout<<a3[p]<<" ";
    }
    
}

int main()
{
    int a[]={2,4,6,8,9};
    int b[]={1,3,5,7,10};
    s(a,b,5,5);
   
return 0;
}

