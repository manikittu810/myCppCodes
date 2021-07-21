// #include "bits/stdc++.h"
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     if(n==0)
//     {
//         cout<<"1"<<endl;
//         exit(0);
//     }
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     cout<<fact<<endl;
//     return 0;
// }

//large factorial

// #include "bits/stdc++.h"
// #include <boost/multiprecision/cpp_int.hpp>
// using boost::multiprecision::cpp_int;
// using namespace std;

// int main() 
// {
// 	cpp_int t,n,fact;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    fact=1;
// 	    cin>>n;
// 	    while(n)
// 	    {
// 	       fact*=(n--);
// 	    }
// 	    cout<<"\n"<<fact;
// 	}
// 	return 0;
// }

// #include "bits/stdc++.h"
// using namespace std;
// #define MAX 500
// int multiply(int x,int res[],int res_size);
// void factorial(int n)
// {
//     int res[MAX];
//     res[0]=1;
//     int res_size=1;
//     for(int x=2;x<=n;x++)
//     {
//         res_size=multiply(x,res,res_size);
//     }
//     for(int i=res_size-1;i>=0;i--)
//         cout<<res[i];
//     cout<<endl;
// }
// int multiply(int x,int res[],int res_size)
// {
//     int carry=0;
//     for(int i=0;i<res_size;i++)
//     {
//         int prod=res[i]*x+carry;
//         res[i]=prod%10;
//         carry=prod/10;
//     }
//     while (carry) 
//     { 
//         res[res_size] = carry%10; 
//         carry = carry/10; 
//         res_size++; 
//     } 
//     return res_size; 
// }

// int main()
// {
//     int n;
//     cin>>n;
//     factorial(n);
//     return 0;
// }


#include "bits/stdc++.h"
using namespace std;
int main()
{
int n,j,temp;
int a[200]={0};
a[0]=1;
j=0;
cout<<"enter number: \n";
cin>>n;
while(n>=2)
{
    temp=0;
    for(int i=0;i<=j;i++)
    {
        temp=(a[i]*n)+temp;
        a[i]=temp%10;
        temp/=10;
    }
    while(temp>0)
    {
        a[++j]=temp%10;
        temp/=10;
    }
    n--;
}
return 0;
}

https://tinyurl.com/GITAM-TFB-2020
https://tinyurl.com/GITAM-TFB-2020
