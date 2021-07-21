#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int a[],int lo,int mid,int hi)
{
    int p1,p2;
    int idx=0;
    int b[hi-lo+1];
    p1=lo,p2=mid+1;
    while (p1<=mid && p2<=hi)
    {
        if(a[p1]<a[p2])
        {
            b[idx++]=a[p1++];
        }
        else
        {
            b[idx++]=a[p2++];
            
        }
    }
    while(p1<=mid)
    {
        b[idx++]=a[p1++];
    }
    while(p2<=hi)
    {
        b[idx++]=a[p2++];
    }
    
    for(int k=lo;k<=hi;k++)
    {
        a[k]=b[k-lo];
    }
}

void mergesort(int a[],int lo,int hi)
{
    if(lo==hi)
    {
        return;
    }
    else{
        int mid=(lo+hi)/2;
        mergesort(a,lo,mid);
        mergesort(a,mid+1,hi);
        merge(a,lo,mid,hi);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    mergesort(a,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}