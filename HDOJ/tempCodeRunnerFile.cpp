  #include<iostream>
  #include<vector>
  #include<unordered_map>
  #include<algorithm>
  using namespace std;
  int main()
  {
    int N;
    while(cin>>N)
    {
      if(N==0) break;
      vector<string> fcolor;
      for(int i = 0;i < N;i++)
      {
        
        string color;
        cin>>color;
        fcolor.push_back(color);

      }
      string pcolor;
      unordered_map<string,int> cnt;
      int maxcnt=-1;
      for(const string& color:fcolor)
      {
        cnt[color]++;
        if(cnt[color]>maxcnt)
          {
            pcolor=color;
            maxcnt=cnt[color];
          }
      }
      cout<<pcolor<<endl;
      
    }

  }