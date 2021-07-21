// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r;
//     cin>>n;
//     int temp=n;
//     int sum=0;
//     while(n!=0)
//     {
//         r=n%10;
//         sum+=(sum*10)+r;
//         n/=10;
//     }
//     if(temp==sum)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;
// int main() 
// { 
//     int n;
//     cin>>n;
//     char str[n];
//     cin>>str;
//     int l = 0; 
//     int h = strlen(str) - 1; 
  
//     while (h > l) 
//     { 
//         if (str[l++] != str[h--]) 
//         { 
//             printf("%s is Not Palindrome \n", str); 
//             break;
         
//         } 
//         else
//         {
//              printf("%s is palindrome \n", str); 
//         }
        
//     } 
   

//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void palin(char str[],char temp[],int n)
{
    strcpy(temp,str);
    strrev(str);
    int res;
    res=strcmp(str,temp);
    if(res==temp)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        char str[n],temp[n];
        for(int k=0;k<n;k++)
        {
            cin>>str[k];
        }
        cout<<palin(str,temp,n);
    }
    return 0;
}