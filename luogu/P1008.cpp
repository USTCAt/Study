#include<iostream>
using namespace std;
bool contains(int x)
{
  int num=1000000*x+1000*2*x+3*x;
  int cnt[10]={0};
  int t;
  while(num>0)
  {
    t=num%10;
    if(t==0)  return false;
    if(cnt[t])  return false;
    cnt[t]++;
    num=num/10;
  }
  return true;
}
int main()
{
  for(int i = 123;i<=333;i++)
  {
    if(contains(i))
      cout<<i<<" "<<2*i<<" "<<3*i<<endl;
  }
}