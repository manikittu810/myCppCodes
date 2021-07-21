#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n]={};
    int i,j,count;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
            if(arr[i]==arr[j])
            {
                count++;
            }
            if(count==1)
            {
                printf("%d",arr[i]);
            }
    }
    return 0;
}