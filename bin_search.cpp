#include "bits/stdc++.h"
using namespace std;
bool bin(int a[],int l,int h,int key)
{
    //  l=0,h=n-1,mid;
    while(l<=h)
    {
    int mid=(l+h)/2;
    if(a[mid]==key)
    {
        return true;
    }
    else if(key<mid)
    {
       return  bin(a,l,mid-1,key);
    }
    else
    {
      return  bin(a,mid+1,h,key);
    }

    }
    return false;

}
int main()
{
   int a[]={1,2,4,5,6,8,7};
   cout<<bin(a,0,6,12)<<endl;
    return 0;
}