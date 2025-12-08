#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string num1;
  string num2;
  int a[200]={0};
  int b[200]={0};
  int ans[500]={0};
  cin>>num1;
  reverse(num1.begin(), num1.end());
  for(int i = 0;i <num1.length() ;i++)
  {
    a[i]=num1[i]-'0';
    // cout<<"a["<<i<<"]:"<<a[i]<<endl;
  }
  cin>>num2;
  reverse(num2.begin(), num2.end());
  for(int i = 0;i < num2.length() ;i++)
  {
    b[i]=num2[i]-'0';
    // cout<<"b["<<i<<"]:"<<a[i]<<endl;
  }
  int carry=0;
  int longer;
  if(num1.length()>num2.length())
  {
    longer=num1.length();
  }
  else{
    longer=num2.length();

  }
  
  for(int j = 0;j < longer; j++)
  {
    int sum = a[j] + b[j] + carry;
    ans[j] = sum % 10; 
    carry = sum / 10;
    
  }
  int truelength=longer;
  if(carry>0)
  {
    ans[longer]=carry;
    truelength=longer+1;
  }
  for(int k = truelength-1;k >= 0;k--)
  {
    cout<<ans[k];
  }
  return 0;
}