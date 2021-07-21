
#include "bits/stdc++.h"
using namespace std;
void decToBin(int n)
{
    int a[32];
    int i=0;
    while(n)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    for(int k=i-1;k>=0;k--)
        cout<<a[k]<<" ";
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        decToBin(n);
    }
    return 0;
}