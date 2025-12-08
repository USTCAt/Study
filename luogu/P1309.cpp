#include<iostream>
#include<string>
using namespace std;
string dan,ci,s;
int cur=-1,ans;
int main()
{
    cin>>ci;
    for(int i=0;i<ci.size();++i)ci[i]=tolower(ci[i]);
    getchar();
    getline(cin,s);
    s+=' ';
    for(int i=0;i<s.size();++i)s[i]=tolower(s[i]);
    for(int i=0;i<s.size();++i)
    {
        if(s[i]==' '){
            if(dan==ci){
                ans++;
                if(cur==-1)cur=i-ci.size();
            }
            dan="";
        }
        else dan+=s[i];
    }
    if(ans==0)printf("-1");
    else printf("%d %d",ans,cur);
    return 0;
}
