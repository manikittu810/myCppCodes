#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,x,cnt=0;
    cin>>n;
    cin>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>=0;i--)
    {
        if(a[i]==x)
        {
            cnt++;
        }
        if(cnt==2)
        {
           cout<<i;
          ;
        }
    }
    return 0;
}





// int key, f, i, a[1000],n;
//    printf("enter size");
//    scanf("%d", &n);
//    printf("enter elements");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    printf("enter ele to search");
//    scanf("%d", &key);
//    for(i=0;i<n;i++)
//    {
//        if(key == a[i])
//        {
//            f= i;
//        }
//    }
//  printf("Last occurance = %d", f+1);
//     return 0;
