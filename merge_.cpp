#include "bits/stdc++.h"
using namespace std;
void merge(int a[],int l,int m,int h)
{
    int p1=l,p2=m+1,k=0;
    int temp[h-l+1];
    while ((p1<=m)&&(p2<=h))
    {
        if(a[p1]<a[p2])
        {
            temp[k++]=a[p1++];
        }
        else{
            temp[k++]=a[p2++];
        }
    }
    while(p1<=m)
    {
        temp[k++]=a[p1++];
    }
    while(p2<=h)
    {
        temp[k++]=a[p2++];
    }
    for(int i=l;i<=h;i++)
    {
        a[i]=temp[i-l];
    }
}

void mergeSort(int a[],int l,int h)
{
    int m=(l+h)/2;
    if(l>=h)
    {
        return;
    }
    mergeSort(a,l,m);
    mergeSort(a,m+1,h);
    merge(a,l,m,h);
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
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}