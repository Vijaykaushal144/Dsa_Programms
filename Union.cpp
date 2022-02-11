#include<iostream>
using namespace std;
void up(int a[],int n,int b[],int m)
{
    
int arr[n+m];
int k=0;
int i=0;int j=0;
int l=0;
while(i<n && j<m)
{
      if(a[i]<b[j])
     {
        
        cout<<a[i++]<<" ";
        
     }
     else if(a[i]>b[j]){
        cout<<b[j++]<<" ";

     }
     else
     {
         cout<<b[j++]<<" ";
         i++;

     }
   
}
while(i<n)
{
    cout<<a[i++]<<" ";
}
while(j<m)
{
    cout<<b[j++]<<" ";

}

}
int main()
{
    int a[]={85,25,1,32,54,6};
    int b[]={85,2};
    up(a,6,b,2);
}