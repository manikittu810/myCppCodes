#include<iostream>
using namespace std;
int main()
{
    int sum=0,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    //or sum= n*(n+1)/2;
    cout<<sum*n<<endl;
    return 0;
}