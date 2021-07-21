#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k,x,y;
    while(t--)
    {
        cin>>n>>k>>x>>y;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(x==y)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
            x=(x+k)%n;            
        }
        if(flag==0)
             cout<<"NO"<<endl;
    }
    return 0;
}


