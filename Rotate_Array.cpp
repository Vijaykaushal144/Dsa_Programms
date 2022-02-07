#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>> &m)
{
     int n=m.size();
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(m[i][j],m[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(m[i].begin(),m[i].end());
    }
    for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m.size();j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
   vector<vector<int>> ans={{1,2,3},{4,5,6},{7,8,9}};
   cout<<"Array before  rotate ==" <<endl;
   for(int i=0;i<ans.size();i++)
   {
       for(int j=0;j<ans.size();j++)
       {
           cout<<ans[i][j]<<" ";
       }
       cout<<endl;
   }

   cout<< " Array After rotate  =="<<endl;
    rotate(ans);
    return 0;
}