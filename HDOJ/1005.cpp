#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int A,B;
  long long n;
  int mem[55];
  while(cin>>A>>B>>n)
  {
    if(A==0 && B==0 && n==0)
    {
      break;
    }
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    f.push_back(1);
    int period;
    for(int i = 3;i<=50;i++)
    {
      f.push_back((A * f[i-1] + B * f[i-2]) % 7);
      if(f[i]==1 &&f[i-1]==1){
        period=i-2;
        break;
        }
    }
    long long pos=(n-1)%period+1;
    cout<<f[pos]<<endl;
  } 
}