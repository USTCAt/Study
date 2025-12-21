#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
  int target;
  int n;
  int nums[100];
  unordered_map<long long,long long> hash;
  cin>>n;
  for(int i = 0;i < n; ++i)
  {
    cin>>nums[i];
  }
  cin>>target;
  hash.clear();
  for(int i = 0;i < n; ++i)
  {
    hash[nums[i]]=i;
  }
  int idx=0;
  while(1)
  {
    int val=target-nums[idx];
    if(hash.find(val)!=hash.end())
      {
        cout<<idx<<" "<<hash[val];
        break;
      }
      idx++;
  }
  return 0;
}