#include<bits/stdc++.h>
using namespace std;
vector<int > a;
int main()
{
    cout<<"type list of 5 members "<<endl;
    int input=0;
    for(int i=0;i<5;i++)
    {
        cin>>input;
        a.push_back(input);
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}