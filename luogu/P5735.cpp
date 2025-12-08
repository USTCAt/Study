#include<iostream>
#include<math.h>
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
  return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
  double x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  printf("%.2lf",distance(x1,y1,x2,y2)+distance(x2,y2,x3,y3)+distance(x1,y1,x3,y3));
}