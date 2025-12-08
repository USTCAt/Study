#include<iostream>
using namespace std;
bool isLeap(int year)
{
  if(year%400==0 || (year%4==0 && year%100!=0))
  {
    return true;
  }
  return false;
}
int main()
{
  int year1,year2;
  cin>>year1>>year2;
  int leap[3000-1580];
  int count=0;
  for(int i = year1;i<=year2;i++)
  {
    if(isLeap(i))
    {
      leap[count]=i;
      count++;
      
    }
  }
  cout<<count<<endl;
  for(int j = 0;j < count;j++)
  {
    cout<<leap[j]<<" ";
  }

}