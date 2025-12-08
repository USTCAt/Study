#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string num1;
  string num2;
  int a[2000]={0};
  int b[2000]={0};
  int ans[50000]={0};
  cin>>num1;
  // reverse(num1.begin(), num1.end());
  for(int i = 0;i <num1.length() ;i++)
  {
    a[i]=num1[num1.length()-1-i]-'0';
     //cout<<"a["<<i<<"]:"<<a[i]<<endl;
  }
  cin>>num2;
  // reverse(num2.begin(), num2.end());
  for(int i = 0;i < num2.length() ;i++)
  {
    b[i]=num2[num2.length()-1-i]-'0';
   // cout<<"b["<<i<<"]:"<<a[i]<<endl;
  }
  for(int i = 0;i < num2.length();i++)
  {
    for(int j =0;j < num1.length();j++)
    {
      ans[j+i]=ans[j+i] + a[j] * b[i];
      if(ans[j+i]>=10)
      {
        ans[j+i+1]+=ans[j+i]/10;
        ans[j+i]=ans[j+i]%10;
      }
     // cout<<"ans["<<j+i<<"]:"<<ans[j+i]<<endl;

    }
  }
  int index=0;
  int totallength=num1.length()+num2.length();
  for(int i = totallength-1;i >= 0;i--)
  {
    if(ans[i]!=0)
    {
      index=i;
      break;
    }
  }
   
  for(int i = index;i >= 0;i--)
  {
    cout<<ans[i];
  }
  return 0;
}