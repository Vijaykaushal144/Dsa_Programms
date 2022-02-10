#include<iostream>
#include<vector>
using namespace std;
int getmex(int a[],int n)
{
    int max=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>max)
        {
            max=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return max;
}
int main(){
    int a[]={2,-1,5,-5,-9,2};
    cout<<getmex(a,6);
}