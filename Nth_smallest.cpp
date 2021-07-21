#include "bits/stdc++.h"
using namespace std;
int main()
{
    int x,N;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    cin>>N;
    sort(a,a+x);
    cout<<a[N-1]<<endl;
    return 0;
}