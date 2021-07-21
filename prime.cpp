
#include "bits/stdc++.h"
using namespace std;
int prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n==2||n==3)
    {
        return true;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        prime(n) ? cout<<"YES"<<'\n': cout<<"NO"<<'\n';
    }
    return 0;
}



#include "bits/stdc++.h"
using namespace std;
bool prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n==2||n==3)
    {
        return true;
    }
    int m = n/2;
    for(int i=2;i<=(m);i++)
    {
        if(m%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        prime(n) ? cout<<"YES"<<'\n': cout<<"NO"<<'\n';
    }
    return 0;
}