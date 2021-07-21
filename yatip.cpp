#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        int a,b;
        while(t--)
        {
            cin>>a>>b;
            int k;
            k=(abs(a-b)+9)/10;
            cout<<k<<endl;
        }
    return 0;
}