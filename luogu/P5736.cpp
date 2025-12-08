#include<iostream>
using namespace std;
bool isPrime(int x)
{
  if(x==1) return false;
  if(x==2 || x==3) return true;
  for(int i = 2 ; i < x ; i++)
  {
    if(x%i==0)  return false;
  }
  return true;
}
int main()
{
  int n;
  cin>>n;
  int number[101];
  for(int i = 0;i < n;i++)
  {
    cin>>number[i];
    
  }
  for(int j = 0;j < n;j++)
  {
    if(isPrime(number[j]))
    {
      cout<<number[j]<<" ";
    }
  }
}