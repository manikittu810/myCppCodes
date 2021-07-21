#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        char min='.';
        unordered_set<char> hash;
        for(int i=s.length()-1;i>=0;--i)
        {
            if(hash.find(s[i])!=hash.end())
            {
                min=s[i];
            }
            hash.insert(s[i]);
        }
        cout<<min<<endl;
    }
    return 0;
}