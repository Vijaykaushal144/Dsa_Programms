 #include <iostream>
using namespace std;
int main()
{
int n,m;
cout << "\nInput the number of rows : ";
cin >> m;
cout << "\nInput the number of columns : ";
cin >> n;
int arr[m][n];
int i,j;
cout << "\nInput the matrix \n";
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
cin >> arr[i][j];
}
}
cout << "\nSpiral Matrix : ";
int k = 0, l = 0;
while(k < m && l < n)
{
for(i = l; i < n; i++)
{
cout << arr[k][i] << " ";
}
k++;
cout<<endl;
for(i = k; i < m; i++)
{
cout << arr[i][n-1] << " ";
}
n--;
cout<<endl;
if(k < m)
{
for(i = n - 1; i >= 0; --i)
{
cout << arr[m-1][i] << " ";
}
m--;
cout<<endl;
}
if(l < n)
{
for(i = m - 1; i >= k; i--)
{
cout << arr[i][l] << " ";
}
l++;
}
}
cout << endl;
return 0;
}