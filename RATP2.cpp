#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        v=i+1;
        d=n-1;
        for(int j=0;j<i+1 ;j++)
        {
            cout<<v<<" ";
            v=v+d;
            d=d-1;
        }
        cout<<'\n';
    }
    return 0;
}