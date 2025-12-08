#include<iostream>
using namespace std;
int f(int x)
{
  int dp[1001]={0};
  dp[1]=1;
  for(int i = 2;i <= x;i++)
  {
    dp[i]=dp[i-1];
    if(i%2==0)
      dp[i]+=dp[i/2];
  }
  return dp[x];

}
int main()
{
  int x;
  cin>>x;
  cout<<f(x)<<endl;

}