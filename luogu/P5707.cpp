#include<iostream>
using namespace std;
int main()
{
  int s,v;
  cin>>s>>v;
  int time;
  if(s%v!=0)
  {
    time=s/v+11;
  }
  else
  {
    time=s/v+10;
  }
  
  int hour;
  if(8-(time/60)<0)
  {
    hour=24+(7-(time/60));
  }
  else if(8-(time/60)==0)
  {
    hour=0;
  }
  else{
    hour=7-(time/60);
  }
  int min;
  if(time%60==0)
  {
    hour=8-(time/60);
    min=0;
  }

  else{
    min=60-time%60;
  }
  if(hour<10 && min>=10)
    cout<<"0"<<hour<<":"<<min<<endl;
  else if(hour >=10 &&min >=10)
    cout<<hour<<":"<<min<<endl;
  else if(hour <10 &&min<10)
  {
    cout<<"0"<<hour<<":0"<<min<<endl;
  }
  else{
    cout<<hour<<":0"<<min<<endl;
  }
}