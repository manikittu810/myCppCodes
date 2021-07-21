#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //cout<<n;
    int a[n],j;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
        //cout<<a[j]<<" "<<end;
    }
    sort(a,a+n);
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}