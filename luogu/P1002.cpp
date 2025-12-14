#include<iostream>
using namespace std;

int main()
{
  int dp[30][30]={0};  
  int x,y,hx,hy;
  cin>>x>>y>>hx>>hy;
  for(int i = 0;i <= x;i++)
  {
    for(int j = 0;j <= y;j++)
    {
      dp[i][j]=1;
    }
  }
  dp[hx][hy]=0;
  if(hx-2>=0 && hy+1<=y) dp[hx-2][hy+1]=0;
  if(hx-1>=0 && hy+2<=y) dp[hx-1][hy+2]=0;
  if(hx+2<=x && hy+1<=y) dp[hx+2][hy+1]=0;
  if(hx+1<=x && hy+2<=y) dp[hx+1][hy+2]=0;
  if(hx-2>=0 && hy-1>=0) dp[hx-2][hy-1]=0;
  if(hx-1>=0 && hy-2>=0) dp[hx-1][hy-2]=0;
  if(hx+2<=x && hy-1>=0) dp[hx+2][hy-1]=0;
  if(hx+1<=x && hy-2>=0) dp[hx+1][hy-2]=0;
  for(int i = 0;i <= x;i++ )
  {
    for(int j = 0;j <= y;j++)
    {
      if(i==0 && j==0) continue;
      if(dp[i][j]==0) continue;
      if(i==0)
        dp[i][j]=dp[i][j-1];
      else if(j==0)
        dp[i][j]=dp[i-1][j];
      else
        dp[i][j]=dp[i-1][j]+dp[i][j-1];
    }
  } 
  cout<<dp[x][y]<<endl;
  //cout<<dp[3][4]<<endl;
}