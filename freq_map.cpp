#include<bits/stdc++.h>
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
        mp[a[j]]++;
        
    }
    
         int q;
        cin>>q;
        for(int k=0;k<q;k++)
        {
            cin>>x;
            // freq(a,n,x);
            // cout<<freq(a,n,x)<<endl;
            cout<<mp[x]<<endl;
        }
    

    return 0;
}

