#include "bits/stdc++.h"
using namespace std;
bool checkbit(long long n,int i)
{
    return (n&(1<<i));
}
int main()
{
    int t,i;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int k=log2(n);
            int c=0;
            for( i=0;i<k;i++)
                if(checkbit(n,i))
                    continue;
                else
                    c+=1;
            cout<<pow(2,c)-1<<endl;
        }
        checkbit(n,i);
    }
    return 0;
}