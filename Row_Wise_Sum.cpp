#include<iostream>
using namespace std;
void sum_row(int a[][3],int i,int j)
{   cout<<"Printing sum of  row== "<<endl;
     for(int i=0;i<3;i++)
    {int sum=0;
        for(int j=0;j<3;j++)
        {
           sum+=a[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main()
{
     int arr[3][3];
     cout<<"Enter the element of array";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>> arr[i][j];
        }
    }
    sum_row(arr ,3,3);


}