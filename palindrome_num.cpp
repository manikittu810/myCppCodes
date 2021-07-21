#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,reverseN=0,originalN,rem;
    cin>>n;
    originalN=n;
    while(n!=0)
    {
        rem=n%10;
        reverseN=reverseN*10+rem;
        n/=10;
    }
    if(reverseN==originalN)
        cout<<originalN<<" is a palindrome"<<endl;
    else
        cout<<originalN<<" is not a palindrome"<<endl;
    return 0;
}