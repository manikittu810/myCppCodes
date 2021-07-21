#include<bits/stdc++.h>
using namespace std;
void ss(int a[],int n)
{
    int min,i,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        { 
            swap(a[i],a[min]);
        }
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        ss(a,n);
    }
    return 0;
}
