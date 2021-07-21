#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool bs(int a[],int n,int k)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==k)
        {
            return true;
        }
        else if (a[mid]<k)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        // return false;
    }
     return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    if(a[i]==k)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
