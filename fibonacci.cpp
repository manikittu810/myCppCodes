#include "bits/stdc++.h"
using namespace std;
// recursive implmentation, time complexity = exponential 
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
    }
    cout<<fib(n);
    return 0;
}