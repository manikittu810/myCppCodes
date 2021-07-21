#include<stdio.h>
long long int gcd(long long int l,long long int w)
{
  if(w==0)
    return l;
  else
    return gcd(w,l%w);
}
int main()
{
  long long int t,n,i,result,c,t,t1;
  scanf("%lld",&t);
  while(t--)
  {
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
      scanf("%lld",&a[i]);
    i=0;
    result=1;
    c=0;
    while(i<=n-1)
    {
      t1=i;
      c=0;
      while(a[i]!=0)
      {
        t=i;//4
        i=a[i]-1;//0
        a[t]=0;//0
        c+=1;//3
      }
      i=t1+1;
      if(c!=0)
        result=result*c/gcd(result,c);
    }
    printf("%lld\n",result);
  }
  return 0;
}