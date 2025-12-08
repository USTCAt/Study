#include<iostream>
#include<string>
using namespace std;
int main()
{
  string Inistr;
  int n;
  cin>>n;
  cin>>Inistr;
  char op;
  string afstr;
  string customInistr;
  string substr="";
  string search;
  for(int i = 0;i < n;i++)
  {
    cin>>op;
    if(op=='1')
    {
      cin>>afstr;
      Inistr+=afstr;
      cout<<Inistr<<endl;
    }
    else if(op=='2')
    {
      int start;
      int end;
      cin>>start>>end;
      cout<<Inistr.substr(start, end)<<endl;
      Inistr=Inistr.substr(start, end);
    }
    else if(op=='3')
    {
      int pos;
      cin>>pos>>customInistr;
      Inistr.insert(pos, customInistr);
      cout<<Inistr<<endl;
    }
    
    else if(op=='4')
    {
      cin>>search;
      bool found=false;
      for(int i = 0; i < Inistr.length();i++)
      { 
        int index=i;
        if(Inistr[i]==search[0])
        {
          found=true;
          for(int k = 0;k<search.length();k++)
          {
            
            if(search[k]!=Inistr[i+k])
            {
              found=false;
              break;
            }     
          }
          if(found)
          {
            cout<<i<<endl;;
            break;
          }  
        }

      }
      if(found==false)
      {
            cout<<-1<<endl; 
      }
    }
  }
  return 0;
}