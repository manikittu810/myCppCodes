#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int es(char a[],char b[])
{
    int ans=INT_MAX;
    int cntb[26]={0};
    for(int i=0;i<=25;i++)
    {
        cntb[b[i]-'a']++;
    }
    for(int j=0;j<26;j++)
    {
        int cnta[26]={0};
        for(int k=i;k<n;k++)
        {
            cnta[a[j]-'a']++;
            if(vaild(cnta,cntb))
                ans=min(ans,j-i+1);
        }
    }
    return ans;
}

bool valid(int cnta[],int cntb[])
{
    for(int i=0;i<n;i++)
    {
        if(cnta[i]<cntb[j])
            return false;
        // return true;
    }
     return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
