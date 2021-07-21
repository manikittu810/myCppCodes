#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
       // cin>>n;
        int a,b;
        cin>>a>>b;
        int m=pow(a,b);
        //cout<<m;
        cin>>n;
       // cout<<m;
        if(n==m && a>1 && b>1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}