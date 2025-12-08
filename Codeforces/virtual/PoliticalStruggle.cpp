#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int FP;
  int SP;
  int TP;
  cin>>FP;
  cin>>SP;
  cin>>TP;
  cout<<FP+min((FP/2),SP+TP);
  return 0;
}