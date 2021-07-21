#include "bits/stdc++.h"
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        cout<<"1"<<endl;
        exit(0);
    }
    else
    {
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
    }
}
   
int com(int n ,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}

int per(int n ,int r)
{
    return fact(n)/fact(n-r);
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<com<<" "<<per;
    return 0;
}