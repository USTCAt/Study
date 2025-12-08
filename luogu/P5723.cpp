#include<iostream>
using namespace std;
bool isPrime(int x)
{
  if(x==2) return true;
  if(x==3) return true;
  for(int i = 2;i<x;i++)
  {
    if(x%i==0)  return false;
  }
  return true;
}
int main()
{
  int L;
  cin>>L;
  int cnt=0;
  int ans=0;
  int num=2;
  while(ans<L)
  {
    if(ans+num>L) break;
    if(isPrime(num))
    {
      cout<<num<<endl;
      ans+=num;
      cnt++;
    }
    
    num++;
    
  }
  cout<<cnt<<endl;
}