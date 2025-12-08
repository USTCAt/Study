#include<iostream>
using namespace std;
int main()
{
  int x;
  int y;
  cin>>x;
  cin>>y;
  int crx=0;
  int cry=0;
  bool up=false;
  bool trans=false;
  while(crx!=x || cry!=y)
  {
    
    if(up==false)
    {
      if(cry<y) cry++;
      else cry--;
      trans=false;
      up=true;
      cout<<crx<<" "<<cry<<endl;
    }
    else if(trans==false)
    {
      if(crx<x) crx++;
      else crx--;
      trans=true;
      up=false;
      cout<<crx<<" "<<cry<<endl;
    }

  }
  return 0;
}