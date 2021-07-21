#include "bits/stdc++.h"
using namespace std;
int main()
{
    set<int,greater<int>> s1;
    s1.insert(40);
    s1.insert(30);
    s1.insert(50);
    s1.insert(80);
    s1.insert(20);
    s1.insert(12);

    set<int ,greater<int>>::iterator it;
    cout<<"\nthe set s1 is:\n";
    for(it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // asigning elements of s1 to s2
    set<int> s2(s1.begin(),s1.end());
    // print all the elemenets of s2
    for(it=s2.begin();it!=s2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // remove all elements upto 30 in s2

    cout<<"\n s2 after removing of elements less than 30\n";
    s2.erase(s2.begin(),s2.find(30));
    for(it=s2.begin();it!=s2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // remove element with value 50 in s2
    int num;
    num=s2.erase(50);
    cout<<"\ns2.erase(50):\n";
    cout<<num<<"removed\n";
    for(it=s2.begin();it!=s2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"s1.lower_bound(40)\n"<<*s1.lower_bound(40)<<endl;
    cout<<"s1.upper_bound(40)\n"<<*s1.upper_bound(40)<<endl;
    cout<<"s2.lower_bound(40)\n"<<*s2.lower_bound(40)<<endl;
    cout<<"s2.lower_bound(40)\n"<<*s2.lower_bound(40)<<endl;
    return 0;
}