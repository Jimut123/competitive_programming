#include<bits/stdc++.h>
using namespace std;
 
int r, c=0;
void print(int a[][4])
{
for(size_t i=0; i<r; i++)
{
for(size_t j=0; j<c; j++)
{
cout<<a*[j]<<" ";
}
cout<<endl;
}
}
 
int main()
{

cin>>r>>c;
int arr[r][4];
 
for(int i=0; i<r; i++)
{
for(int j=0; j<c; j++)
{
cin>>arr*[j];
}
}
print(arr); //
return 0;
}
