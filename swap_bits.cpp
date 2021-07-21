#include "bits/stdc++.h"
using namespace std;
int checkBit(int n,int i)
{
    return ((n>>i)&1);
}
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for( int i=0;i<32;i+=2)
    {
       ans += checkBit(n,i)*pow(2,i+1);
       ans+=checkBit(n,i+1)*pow(2,i);
    }
     cout<<ans<<" ";
    return 0;
}