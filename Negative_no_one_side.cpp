#include<iostream>
#include<vector>
using namespace std;
void print_negative(int a[],int n)
{
    int i=0;
      int j=0;
    while(i<n)
    {
      
        if(a[i]<0)
        {
            if(i!=j)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
        i++;
    }
    for(int p=0;p<n;p++)
    {
        cout<<a[p]<<" ";
    }

}
int main()
{
    int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    print_negative(a,9);
}