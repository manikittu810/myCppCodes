#include "bits/stdc++.h"
using namespace std;
//d is the no. of characters in the input alphabet
# define d 256
/* pat->pattern
txt->text
q ->a prime number
*/
int search(char pat[],char txt[])
{
    int q=101;
    int count=0;
    int m=strlen(pat);
    int n=strlen(txt);
    int i,j;
    int p=0;//hash value for pattern
    int t=0;//hash value for text
    int h=1;
    //the value of h would be "pow(d,m-1)%q"
    for(i=0;i<m-1;i++)
        h=(h*d)%q;
    //calculate the value of pattern and first window text
    for(i=0;i<m;i++)
    {
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }
        //slide the pattern over text by one by one
        for(i=0;i<=n-m;i++)
        {
                //Check the hash values of current window of text  
                // and pattern. If the hash values match then only  
                // check for characters on by one  
            if(p==t)
            {
                /* Check for characters one by one */
                for(j=0;j<m;j++)
                {
                  if(txt[i+j]!=pat[j])
                        break;
                }
                // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]  
                if(j==m)
                {
                    count++;
                    // cout<<"pattern found at index : "<<i<<endl;
                    // cout<<"count : "<<count<<endl;
                }
            }
            // Calculate hash value for next window of text: Remove  
             // leading digit, add trailing digit  
            if(i<n-m)
            {
                t=(d*(t-txt[i]*h)+txt[i+m])%q;
                // We might get negative value of t, converting it  
                // to positive  
                if(t<0)
                    t+=q;
            }
        }
        return count;
}
// int main()
// {
//     char txt[]="geeks for geeks";
//     char pat[]="geeks";
//     int q=101;//prime number
//     search(pat,txt,q);
//     return 0;
// }
int main()
{
    int t;
    cin>>t;
    char pat[10000];
    char txt[10000];
    while(t--)
    {
        cin>>pat>>txt;
        // int q;
        // cin>>q;
        cout<<search(pat,txt)<<endl;
    }
    return 0;
}
