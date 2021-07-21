#include "bits/stdc++.h"
using namespace std;
int  fib(int n)
{
  int x=0,y=1,z=0;
//   if(n==0)
//   {
//       return 0;
//   }
  for(int i=0;i<n;i++)
  {
      cout<<x<<" ";
      z=x+y;
      x=y;
      y=z;
  }
  return y;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<" "<<'\n';
    return 0;
}