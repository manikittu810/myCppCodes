#include "bits/stdc++.h"
using namespace std;
void removeDup(int a[],int n)
{
 
    set<int> s1;
    for(int i=0;i<n;i++)
    {
        s1.insert(a[i]);
    }
    set<int> :: iterator it;
    for(it=s1.begin();it!=s1.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    removeDup(a,n);
    }
    return 0;
}