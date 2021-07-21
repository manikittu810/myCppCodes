#include "bits/stdc++.h"
using namespace std;
int main()
{
    int i,n=9;
    int a[]={1,2,3,4,5,6,7,8,9};
    int k=12;
    for(i=0;i<n;i++)
    {
        if(k==a[i]){
            cout<<"1"<<endl;
            break;
        } 
    }
    if(i==n)
        cout<<"-1"<<endl;
    return 0;
}