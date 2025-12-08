#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int n;
  int a[20005];
  for(int i = 0;i < t;i++ )
  {
    cin>>n;
    for(int j = 1;j <= n;j++)
    {
      cin>>a[j];
      if(j!=1 && j!=n && a[j]==-1)
      {
        a[j]=0;
      }
      
    }
    if(a[1]==-1 && a[n]==-1)
    {
      a[1]=0;
      a[n]=0;
    }
    else if(a[1]==-1 && a[n]!=-1)
    {
      a[1]=a[n];
    }
    else if(a[1]!=-1 && a[n]==-1)
    {
      a[n]=a[1];
    }
    cout<<abs(a[n]-a[1])<<endl;
    for(int k = 1;k <= n;k++)
    {
      cout<<a[k]<<" ";
    }
    if(i!=t-1)
      cout<<endl;
  } 
  return 0;
}