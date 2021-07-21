#include<iostream>
using namespace std;
int main()
{
  int f,fd,fc,s,sd,sc,a,ad,ac;
  cin>>f>>fd>>fc>>s>>sd>>sc>>a>>ad>>ac;
  int x,y,z;
    x=(f*(fd)/100);
       int x1=(f-fd)+fc;
    y=(s*(sd)/100);
        int y1=(s-sd)+sc;
    z=(a*(ad)/100);
              int z1=(a-ad)+ac;

   cout<<"In Flipkart Rs. "<<x<<endl;
   cout<<"In Snapdeal Rs. "<<y<<endl;
   cout<<"In Amazon Rs. "<<z<<endl;

  if(x1<y1&&x1<z1)
   	cout<<"He will prefer Flipkart";
  if(x1>y1&&y1<z1)
       	cout<<"He will prefer Snapdeal";
  if(z1<x1&&z1<y1)
    cout<<"He will prefer Amazon";
  return 0;
}