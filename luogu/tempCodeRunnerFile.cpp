#include<iostream>
using namespace std;
int main()
{
  int coins=0;
  int k;
  cin>>k;
  int layers=0;
  int v=1;
  int cnt=0;
  while(cnt<k)
  {
    layers++;
    cnt+=v;
    v++;
    
  }
  int before=0;
  for(int i = 1;i < layers;i++)
  {
    before+=i;
    coins+=i*i;
    //cout<<"currentcoins:"<<coins<<endl;
  }
  coins=coins+(k-before)*layers;
  // cout<<cnt<<endl;
  // cout<<layers<<endl;
  // cout<<before<<endl;
  cout<<coins<<endl;
}