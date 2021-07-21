#include "bits/stdc++.h"
using namespace std;
int main()
{
    string m;
    getline(cin,m);
    int t;
    t=stoi(m);
    string ans;
    while(t--)
    {
        string s;
        getline(cin,s);
        if(s[0]=='1')
        {
            string f;
            f=s.substr(2,s.length());
            ans.append(f);
        }
        else if(s[0]=='2')
        {
            string x;
            x=s.substr(2,s.length());
            int y=stoi(x);
            for(int i=0;i<y;i++)
                ans.pop_back();
        }
        else
            cout<<ans<<endl;
    }
    return 0;
}