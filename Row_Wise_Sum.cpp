#include<iostream>
using namespace std;
void sum_column(int a[][3],int i,int j)
{   cout<<" sum of  column == "<<endl;
     for(int j=0;j<3;j++)
    {int sum=0;
        for(int i=0;i<3;i++)
        {
           sum+=a[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
void  sum_row(int a[][3],int i,int j)
{   cout<<" sum of  row== "<<endl;
int sum=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           sum+=a[i][j];
        }
        cout<<sum<<" ";
    }
    cout<< endl;
    


}
void  Max_in_sum_row(int a[][3],int i,int j)
{   
int sum=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           sum+=a[i][j];
        }
    }
    int max=-1;
    if(sum>max)
    {
        max=sum;
    }
    cout<<"max of sum is =="<<max<<endl;


}
int main()
{
     int arr[3][3];
     cout<<"Enter the element of array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>> arr[i][j];
        }
    }
    sum_row(arr ,3,3);
    sum_column(arr,3,3);
    Max_in_sum_row(arr,3,3);


}