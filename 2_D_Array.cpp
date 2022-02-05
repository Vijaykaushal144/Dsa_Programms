#include<iostream>
using namespace std;
 bool ispresent(int a[][4],int target, int row,int column)
    {
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if( a[i][j]== target);
            {
                return 1;
            }
        }
    }
    return 0;
    }
int main()
{
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>> arr[i][j];
        }
    }
    int target;
    cout<<"ENter the element to search"<<endl;
    cin>>target;
    if(ispresent( arr,target ,3,4))
    {
        cout<<"Element is present"<<endl;
    
    }
    else{
        cout<<"Element is not present "<< endl;
    }
    
    return 0;
}