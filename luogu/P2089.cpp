#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<vector<int>> res;
  res.reserve(256);
  if(n>30 || n<10) 
  {
    cout<<0<<endl;
    return 0;
  }
  int ans=0;
  for(int a = 1;a <= 3;a++)
  {
    
    for(int b = 1;b <= 3;b++)
    {
      
      for(int c = 1;c <= 3;c++)
      {
        
        for(int d = 1;d <= 3;d++)
        {
          if(a+b+c+d>n)  break;
          for(int e = 1;e <= 3;e++)
          {
            if(a+b+c+d+e>n)  break;
            for(int f = 1;f <= 3;f++)
            {
              if(a+b+c+d+e+f>n)  break;
              for(int g = 1;g <= 3;g++)
              {
                if(a+b+c+d+e+f+g>n)  break;
                for(int h = 1;h <= 3;h++)
                {
                  if(a+b+c+d+e+f+g+h>n)  break;
                  for(int i = 1;i <= 3;i++)
                  {
                   if(a+b+c+d+e+f+g+h+i>n)  break;
                   for(int j = 1;j <= 3;j++)
                    {
                      if(a+b+c+d+e+f+g+h+i+j==n){
                        vector<int> current_combination;
                        current_combination.push_back(a);
                        current_combination.push_back(b);
                        current_combination.push_back(c);
                        current_combination.push_back(d);
                        current_combination.push_back(e);
                        current_combination.push_back(f);
                        current_combination.push_back(g);
                        current_combination.push_back(h);
                        current_combination.push_back(i);
                        current_combination.push_back(j);
                        
                        res.push_back(current_combination);
                        ans++;
                        }
                        }
                      } 
                    }
                  }
                }   
              } 
            } 
          }  
        }
      
    
  }
  cout<<ans<<endl;
  for(int k=0;k < ans;k++)
  {
    for(int num: res[k])
    {
      cout<<num<<" ";
    }
    cout<<endl;
  }
}