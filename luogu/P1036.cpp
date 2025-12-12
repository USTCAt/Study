#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> nums;
int n,k,ans=0;
bool isPrime(int x)
{
  if(x==2 || x==3) return true;
  if(x<2 || x%2==0 || x%3==0) return false;
  for(int i = 5;i * i<=x;i++)
  {
    if(x%i==0)
      return false;
  }
  return true;
}
void dfs(int start,int count,int sum)
{
  if(count>k) return;
  if(count+(n-start)<k) return;
  if(count == k)
  {
    if(isPrime(sum)) ans++;
    return;
  }
  for(int i = start;i < n;i++)
  {
    dfs(i+1,count+1,sum+nums[i]);
  }
  
}
int main()
{
  cin>>n>>k;
  nums.resize(n);
  for(int i = 0;i < n;i++)
  {
    
    cin>>nums[i];
    
  }
  dfs(0,0,0);
  cout<<ans<<endl;
}