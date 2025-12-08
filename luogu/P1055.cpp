#include<iostream>
using namespace std;
int main()
{
  string ISBN;
  cin>>ISBN;
  int cal=0;
  int times=1;
  for(int i = 0;i < ISBN.length()-2;i++)
  {
    if(ISBN[i]>='0' && ISBN[i]<='9')
    {
      cal+=(ISBN[i]-'0')*times;
      times++;
    }
  }
  char rec;
  switch(cal%11)
  {
    case 10:  
      rec='X';
      break;
    default:
      rec=cal%11+'0';
  }
  
  if(ISBN[12]==rec)
    cout<<"Right"<<endl;
  else{
    for(int j = 0;j < ISBN.length()-1;j++)
      cout<<ISBN[j];
    cout<<rec;
  }

}