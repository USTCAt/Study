/*1. Car Wash
time limit per test1 second
memory limit per test256 megabytes
Max arrived at a self-service car wash to wash his car. He can choose one of three available payment rates.

Fixed amount — pay X
 rubles for the entire wash regardless of the time and water used;
Pay-per-minute — pay Y
 rubles for each minute spent washing;
Pay-per-liter — pay Z
 rubles for each liter of water used during the wash.
Max knows that he will completely wash the car in T
 minutes, using V
 liters of water in the process.
Help Max determine the minimum amount of rubles needed to pay for the car wash if he chooses the rate optimally.

Input
The first line contains an integer X
 (1≤X≤104
) — the fixed payment rate for the car wash.
The second line contains an integer Y
 (1≤Y≤104
) — the cost per minute of washing.
The third line contains an integer Z
 (1≤Z≤104
) — the cost per liter of water.
The fourth line contains an integer T
 (1≤T≤104
) — the number of minutes required to wash the car.
The fifth line contains an integer V
 (1≤V≤104
) — the volume of water in liters required to wash the car.
Output
Output a single integer — the minimum amount of rubles to pay for the car wash.
Scoring
Solutions that work correctly for T=1
, V=1
 will be scored with 20
 points.*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int X,Y,Z,T,V;
  cin>>X;
  cin>>Y;
  cin>>Z;
  cin>>T;
  cin>>V;
  int solid=X;
  int time=Y*T;
  int water=Z*V;
  if(water<time && water<solid)
  {
    cout<<water<<endl;
  }
  else if(time<water && time<solid)
  {
    cout<<time<<endl;;
  }
  else if(solid<water && solid<<time)
  {
    cout<<solid<<endl;
  }
  else if(solid==1 && water==1 && time ==1 )
  
  {
    cout << 1<<endl;
  }
  return 0;
}