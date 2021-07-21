#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool cs(char a[],char b[],int len1,int len2)
{
    if(len1==0)
    {
        return true;
    }
    if(len2==0)
    {
        return false;
    }
    if(a[len1-1]==b[len2-1])
    {
        return cs(a,b,len1-1,len2-1);
    }
    return cs(a,b,len1,len2-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    char a[]={};
    char b[]={};
    int len1=strlen(a);
    int len2=strlen(b);
    while(t--)
    {
       scanf("%c %c",&a,&b);
    }
    cs(a,b,len1,len2) ? cout<<"Yes"<<endl : cout<<"No";
    return 0;
}
