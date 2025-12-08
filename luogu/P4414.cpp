#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int list[3];
  cin>>list[0]>>list[1]>>list[2];
  sort(list,list+3);
  string sq;
  cin>>sq;
  for(int i = 0; i < 3;i++)
  {
    if(sq[i]=='A')  cout<<list[0]<<" ";
    if(sq[i]=='B')  cout<<list[1]<<" ";
    if(sq[i]=='C')  cout<<list[2]<<" ";
  }
}