#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
  int m,n;
  cin>>n>>m;
  vector<int> stu;
  stu.push_back(0);
  for(int i = 1;i<=n;i++)
  {
    int id;
    cin>>id;
    stu.push_back(id);
  }
  for(int j=0;j<m;j++)
  {
    int sq;
    cin>>sq;
    cout<<stu[sq]<<endl;
  }
}