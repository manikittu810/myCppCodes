#include<bits/stdc++.h>
using namespace std;
bool twsk(int a[],int low,int n,int k)
{
    int i=low;
    int j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            return true;
        }
        if(a[i]+a[j]<k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
        
    return false;
}
bool solve(int a[],int N,int K)
{
    for(int k=0;k<N;k++)
    {
        if(twsk(a,k+1,N,K-a[k]))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    int N,K;
    while(t--)
    {
        cin>>N>>K;
        int a[N];
        for(int j=0;j<N;j++)
        {
            cin>>a[j];
        }
        sort(a,a+N);
        solve(a,N,K) ? cout<<"true"<<endl : cout<<"false"<<endl;
    }
    return 0;
}