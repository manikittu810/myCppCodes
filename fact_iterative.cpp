#include "bits/stdc++.h"
using namespace std;
int fact(int n)
{
    int res=1;
    if(n==0||n==1)
    {
        return 1;
    }
    for(int i=2;i<=n;i++)
    {
        res*=i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<" "<<endl;
    return 0;
}