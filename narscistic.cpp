#include<bits/stdc++.h>
using namespace std;
int noOfDigits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
    int n=8208;
    cout<<noOfDigits(n)<<endl;
    return 0;
}
