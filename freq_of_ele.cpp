#include<bits/stdc++.h>
using namespace std;
int freq(int a[],int n,int x)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            c++;
        }
    }
    return c;

}
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    
         int q;
        cin>>q;
        for(int k=0;k<q;k++)
        {
            cin>>x;
            // freq(a,n,x);
            cout<<freq(a,n,x)<<endl;
        }
    

    return 0;
}

