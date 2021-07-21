#include<bits/stdc++.h>
using namespace std;
void spiral(int a[100][100],int m,int n)
{
    int t=0,b=m-1,l=0,r=n-1,i;
    int dir=0;
    while(t<=b&&l<=r)
    {
        if(dir==0)
        {
                for(i=l;i<r;i++)
             {
                  cout<<a[t][i];
                 t++;
                //dir=1;
             }
            }
            else if(dir==1)
            {
                for(i=t;i<=b;i++)
                {
                    cout<<a[i][r];
                    r--;
                   // dir=2;
                }
            }
                else if(dir==2)
                {
                    for(i=r;i>=l;i--)
                    {
                      cout<<a[b][i];
                        b--;
                        //dir=3;
                    }
                }
                else if(dir==3)
                {
                    for(i=b;i>=t;i--)
                    {
                      cout<<a[i][l];
                         l++;
                        //dir=0;
                    }
                }
                  dir=(dir+1)%4;
            }
        }
int main()
{
    int m,n,a[100][100],t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        //m=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;i<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<spiral(a,m,n);
    }
    return 0;
} 