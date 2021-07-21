#include<bits/stdc++.h>
using namespace std;
  void merge(int a[],int lo,int hi)
    {
        int mid=(lo+hi)/2;
        int i,j,k;
        k=hi-lo+1;

        int b[k];
        i=lo;j=mid+1;k=0;
        while(i<=mid && j<=hi)
        {
            if(a[i]<a[j])
                b[k++]=a[i++];
            else
                b[k++]=a[j++];
        }
        while(i<=mid)
            b[k++]=a[i++];
        while(j<=hi)
            b[k++]=a[j++];
        for (int x=0;x<k;x++)
            {
            a[lo+x]=b[x];
            }
            }
            void printArray(int a[],int l,int n,int h)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
     void  MS(int a[],int lo,int hi)
    {
        if(lo>=hi) 
        {
            return ;
            }
        int mid=(lo+hi)/2;
        MS(a,lo,mid);
        MS(a,mid+1,hi);
        merge(a,lo,hi);
    }
int main()
{
    int N;
    cin>>N;
    int a[N],lb,ub;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    MS(a,0,N-1);
    return 0;
}