#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
  int m,n;
  cin>>n>>m;
  unordered_map<int,string> stu;
  for(int i = 1;i<=n;i++)
  {
    int id;
    cin>>id;
    stu[i]=id+'0';
  }
  for(int j=0;j<m;j++)
  {
    int sq;
    cin>>sq;
    cout<<stu[sq]<<endl;
  }
}