#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    long long C;
    cin>>n>>C;
    vector<int> nums(n);
    for(int i = 0;i < n; ++i)
    {
        cin>>nums[i];   
    }
    sort(nums.begin(),nums.end());
    long long ans=0;
    int left=0,right=0;
    for(int i = 0;i < n; ++i)
    {
        while(left<n && nums[left]<nums[i]+C)   left++;
        while(right<n && nums[right]<=nums[i]+C)   right++;
        ans+=(right-left);
        cout<<"left: "<<left<<endl;
        cout<<"right: "<<right<<endl;
    }
    cout<<ans;
    return 0;
}