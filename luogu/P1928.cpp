#include<iostream>
using namespace std;
string hack()
{
  string res="";
  char ch;
  while(cin>>ch)
  {
    int x;
    if(ch=='[')
    {
      cin>>x;
      string temp=hack();
      while(x--)
      {
        res+=temp;
      }
    }
    else if(ch==']')
    {
      return res;
    }
    else
    {
      res+=ch;
    }
  }
  return res;
}
int main()
{
  cout<<hack()<<endl;
}