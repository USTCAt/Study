#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cin>>s;
  char num[101];
  int i = 0;
  int k = 0;
  for(i=0;i<s.length();i++)
  {
    if(s[i]!='+')
    {
      num[k]=s[i];
      k++;
    }
  }
  sort(num,num+k);
  string  ans;
  for(int j = 0;j < k;j++)
  {
    if(j)
    {
      ans+='+';
    }
    ans+=num[j];
  }
  cout<<ans<<endl;

}