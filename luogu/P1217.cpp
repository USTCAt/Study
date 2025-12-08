#include<iostream>
using namespace std;
bool isdrome(int x)
{
  if(x==2) return true;
  if(x%2==0) return false;
  int tmp=x;
  int carry=0;
  int cmp=0;
  while(tmp)
  {
    cmp=cmp*10+tmp%10;
    
    tmp=tmp/10;
  }
  if(x==cmp)  return true;
  else return false;
}
bool isprime(int x)
{
  if(x==1) return false;
  if(x==2) return true;
  if(x==3) return true;
  for(int i = 2;i*i<=x;i++)
  {
    if(x%i==0)  return false;
  }
  return true;
}
int main()
{
  int a,b;
  cin>>a>>b;
  for(int i = a;i<=b;i++)
  {
    if(isdrome(i) && isprime(i))
      cout<<i<<endl;
  }
  
  
}