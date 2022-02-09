#include<iostream>
using  namespace std;
void selection_sort(int a[],int n)
{ 
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {  
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
       
}

int main()
{
    int ar[]={2,12,34,56,6,78,9};
        selection_sort(ar,7);
        //print_selection(ar,7);
        return 0;
}