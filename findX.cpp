#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t,x,n;
    cin>>t;
    cin>>x;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n-1;j++)
                if(a[i]+a[j]==x)
                    cout<<"yes"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}