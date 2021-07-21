#include "bits/stdc++.h"
using namespace std;
int main()
{
  int n,s,p;
  s=n*n;
  p=s%10;
  cin>>n;
  if(n<1)
  {
    cout<<"Wrong Input";
  }
  else if(n==p)
  {
    cout<<"Correct Number";
  }
  else
    cout<<"Incorrect Number";
  return 0;
}