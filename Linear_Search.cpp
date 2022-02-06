#include<iostream>
using namespace std;
bool search(int   a[],int size,int num)
    {
            
        for (int i = 0; i <size; i++) {
            if(a[i]==num)
            {
                return true;
            }
        }
        return  false;
    }
int main()
{
        int arr[10];
        cout<<"Enter the number "<<endl;

        for (int i = 0; i < 10;i++) {
            cin>>arr[i];
        }
        cout<<"Enter the number ="<<endl;
        int num1;
        cin>>num1;
            bool p=search(arr,10,num1);
        if (p)
        {
            cout<<"Number is present ";
        }
        else{
           cout<<"Number is not present ";
        }
    
    return 0;
}