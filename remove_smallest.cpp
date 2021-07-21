#include<bits/stdc++.h>
using namespace std;
int rs(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-a[i-1])>1)
        {
            return false;
        }
        return true;
        
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            for(int j=0;j<n;j++)
            {
                 cin>>a[j][i];
                sort(a.begin(),a.end());
                if(rs(a,n)==true)
                {
                    cout<<"Yes";
                }
                else
                {
                    cout<<"No";
                }
            }
        }
    return 0;
    }
