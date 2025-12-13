#include <iostream>
#include <unordered_map>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<string> strs(n);
  for(int i = 0;i < n; i++ )
  {
    cin>>strs[i];

  }
  unordered_map<string,int> hash;
  for(string str:strs)
  {
    hash[str]++;
  }
  int cnt=0;

  cout<<hash.size()<<endl;
  
  return 0;
}