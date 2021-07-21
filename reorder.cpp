#include "bits/stdc++.h"
using namespace std;
int main()
{
    long  t,n,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long a=0;
        for(int i=0;i<n;i++)
        {
            cin>>j;
            a+=j;
        }
        if(a==m)
            puts("YES");
        else
            puts("NO");
    }
        
    return 0;
}


// #include<stdio.h>
// long long t, n, i, j, k, A[100010];
// int main()
// {
//     for(scanf("%lld", &t);t--;)
//     {
//         scanf("%lld %lld", &n, &k);
//         long long a=0;
//         for(i=0;i++<n;)
//         {
//             scanf("%lld", &j);
//             a+=j;
//         }
//         if(a==k)puts("YES");
//         else puts("NO");
//     }
// }
