// #include "bits/stdc++.h"
// using namespace std;
// void bin(int n)
// {
//     if(n>1)
//     {
//         bin(n>>1);
//     }
//     cout<<(n&1)<<" ";
// }
// int main()
// {
//     int n;
//     cin>>n;
//     bin(n);
//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;
void bin(int n)
{
    if(n>1)
    {
        bin(n/2);
    }
    cout<<(n%2)<<" ";
}
int main()
{
    int n;
    cin>>n;
    bin(n);
    return 0;
}