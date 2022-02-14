#include<iostream>
using namespace std;
int search_element(int a[],int n,int target)
{
    int s=0;
    int end=n-1;
    while(s<=end)
    {
        int mid=s+(end-s)/2;
        if(a[mid]==target)
        {
            return mid;

        }
        else if(target >a[mid])
        {
                s=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return s;
}
int main()
{
    int a[]={1,3,5,6};
    cout<<search_element(a,4,5)<<endl;
    return 0;

}