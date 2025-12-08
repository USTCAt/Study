#include<iostream>
using namespace std;
long long mem[30][30][30];
long long w(long long  a,long long b,long long c)
{
  if(a<=0 || b<=0 || c<=0)
  {
    return 1;
  }
  
  if( a>20 || b>20 || c>20 )
  {
    a=20;
    b=20;
    c=20;

  }
  if(mem[a][b][c]) return mem[a][b][c];
  else if(a<b && a<c)
  {
    mem[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
 
  }
  else{
    mem[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
  }
  return mem[a][b][c];
}
int main()
{
  long long a,b,c;
  while(cin>>a>>b>>c){
    if(a==-1 &&b==-1&&c==-1)
      break;
    else
      cout<<"w("<<a<<", "<<b<<", "<<c<<") "<<"= "<<w(a,b,c)<<endl;
  }
}