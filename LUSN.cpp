#include "bits/stdc++.h"
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            cout<<"Upper Case"<<endl;
            break;
        }
        else if(str[i]>=96 && str[i]<=122)
        {
            cout<<"Lower Case"<<endl;
            break;
        }
        else if(str[i]>=47 && str[i]<=58)
        {
            cout<<"Number"<<endl;
            break;
        }
        else
        {
            cout<<"Symbol"<<endl;
            break;
        }
        
    }
    return 0;
}