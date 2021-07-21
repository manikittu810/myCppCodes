#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,count=1;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
         {
        cout<<count<<" ";
        count++;
         }
    }
     cout<<endl;
    return 0;
}