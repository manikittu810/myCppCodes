#include "bits/stdc++.h"
using namespace std;
int main()
{   
long long int n,s1,s2,l;
long long int a[2];
a[0]=0;
a[1]=0;
cin>>n;
int p1,p2;
s1=0;
s2=0;
for(int i=0;i<n;i++)
{
    cin>>p1>>p2;
    s1+=p1;
    s2+=p2;
    if(s1>s2)
    {
        l=s1-s2;
        if(a[0]<l)
        {
            a[0]=l;
        }
    }
    else
    {
            l=s2-s1;
            if(a[1]<l)
            {
                a[1]=l;
            }
    }
}
if(a[0]>a[1])
{
    cout<<"1 "<<a[0]<<endl;
}
else{
cout<<"2 "<<a[1]<<endl;
}
    return 0;
}