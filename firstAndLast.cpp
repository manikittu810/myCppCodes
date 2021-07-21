#include "bits/stdc++.h"
using namespace std;
int first(int n)
{
   while(n>=10)
   {
       n/=10;
   }
   return n;
}
int last(int n)
{
    return n%10;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<first(n)+last(n)<<endl;
    }
    return 0;
}


// without loop for first number
// int digits = (int)log10(n); 
  
//     Find first digit 
//     n = (int)(n / pow(10, digits));