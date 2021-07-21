#include "bits/stdc++.h"
using namespace std;
bool bin(int a[],int l,int h,int k)
{
    while(l<=h){
   int  mid=(l+h)/2;
   if(k==a[mid])
   {
       return true;
   }
   else if(k>a[mid])
        l=mid+1;
    else 
        h=mid-1;
}
return false;
}
int main()
{
    int n=9;
    int a[]={1,2,3,4,5,6,7,8,9};
    bool res= bin(a,0,n-1,12);
    cout<<res<<endl;
    return 0;
}