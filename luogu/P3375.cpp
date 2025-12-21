#include<iostream>
#include<vector>
using namespace std;
void getNext(int next[],string s)
{
  int i , j = 0 ;//i前缀末尾,j后缀末尾
  next[0]=0;
  for(i = 1;i < s.length(); ++i)
  {
    while(j && s[i] != s[j])
    { 
      j = next[j - 1];//前后缀不相同
    }
    if(s[i] == s[j])
    {
      ++j;
      
    }
    next[i] = j;
  }
}
vector<int> KMP(const string& text ,const string& pattern)//text文本串 pattern模式串
{
  vector<int> res;
  if(pattern.empty() || pattern.length() > text.length())
  { 
    return res;//空模式串或模式串长度大于文本串返回空数组
  }
  int n=text.length();
  int m=pattern.length();
  //int next[m];直接申请的是临时变量，报错了
  int* next = new int[m];//申请空间,类似C里面的malloc;
  getNext(next,pattern);
  int j = 0;
  for(int i = 0;i < n; ++i)
  {
    while(j && text[i] != pattern[j])
    {
      j = next[j-1];
    }
    if(text[i] == pattern[j])
    {
      ++j;
    }
    if(j == m)//模式串匹配成功，返回起始下标
    {
      res.push_back(i - m + 1);
      j = next[ j - 1 ];//题目要求返回所有对应下标，正常来说这里应该返回了
    }
  }
  delete[] next;//类似于C里面的free()
  return res;//返回数组

}
void printNext(const string& pattern) {//狗草的题目还要我输出next数组
    if (pattern.empty()) {
        return;
    }
    int m = pattern.length();
    int* next = new int[m];
    getNext(next, pattern); // 重新构建next数组用于输出
    for (int i = 0; i < m; ++i) {
        cout << next[i] << " ";
    }
    cout << endl;
    delete[] next;    
}

int main()
{
  string text;
  string pattern;
  cin>>text;
  cin>>pattern;
  vector<int> pos = KMP(text,pattern);
  for(int postions:pos)
  {
    cout<<postions+1<<endl;//加1是题目要求从1开始
  }
  printNext(pattern);
}