#include<iostream>
#include<string.h>
using namespace std;
long long mem[55];
long long f(long long A,long long B,long long n)
{
  if(n==1) 
  {
    return mem[1]=1;
  }  
  if(n==2){ 
    
    return mem[2]=1;
  }
  if(mem[n]!=0) return mem[n];
  mem[n]=((A * f(A,B,n - 1))%7 + (B * f(A,B,n - 2))%7) % 7;
  return mem[n];
}
int main()
{
  long long A,B,n;
  while(cin>>A>>B>>n)
  {
    memset(mem,0,sizeof(mem));  
    if(A==0&&B==0&&n==0)
      break;
    cout<<f(A,B,n)<<endl;
  }
}