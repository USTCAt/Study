#include <iostream>
#include <vector>
using namespace std;
void Insertsort(int arr[],int n)
{
  for(int i = 1;i < n;++i)
  {
    int tmp=arr[i];
    int j = i - 1;
    while( j>=0 && arr[j] > tmp )
    {
      arr[j+1]=arr[j];
      --j;
    }
    arr[ j+1 ] = tmp;
  }
}
int main()
{
  int n;
  cin>>n;
  int nums[101];
  for(int i = 0;i < n; ++i)
  {
    cin>>nums[i];
  }
  Insertsort(nums,n);
  for(int i = 0;i < n; ++i)
  {
    cout<<nums[i]<<" ";
  }
  return 0;
}