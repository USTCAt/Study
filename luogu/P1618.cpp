#include<iostream>
using namespace std;
bool contains(int x,int a,int b,int c)
{
  int num=1000000*a*x+1000*b*x+c*x;
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
  int a,b,c;
  cin>>a>>b>>c;
  bool found=false;
  if(!a||!b||!c)
  {
    cout<<"No!!!"<<endl;
    return 0;
  }
  for(int i = 1;i<=333;i++)
  {
    if( a*i>=123 && contains(i,a,b,c) && c*i<1000){
      cout<<a*i<<" "<<b*i<<" "<<c*i<<endl;
      found=true;
    }
  }
  if(!found)  cout<<"No!!!"<<endl;
}