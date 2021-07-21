#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int maxsubarrsum(int a[],int n)
{
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int s=0;
            for(int k=i;k<=j;k++)
            {
                s+=a[k];
            }
            maxsum=max(s,maxsum);
        }
    }
    return maxsum;
}
int main()
{
    int t;
    cin>>t;
    int n;
    for(int m=0;m<t;m++)
    {
        cin>>n;
        int a[n];
        for(int z=0;z<n;z++)
        {
            cin>>a[z];
            // cout<<maxsubarrsum(a,n);
        }
        cout<<maxsubarrsum(a,n)<<endl;

    }
    return 0;
}