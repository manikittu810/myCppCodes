#include<bits/stdc++.h>
using namespace std;
int gcd(long  a,long b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int main()
{
    int t;
    cin>>t;
     long long a,b;
    while(t--)
    {
        cin>>a>>b;
        cout<<(a*b)/gcd(a,b)<<" "<<gcd(a,b)<<endl;
    }
    return 0;
}