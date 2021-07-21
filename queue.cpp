#include <bits/stdc++.h>
using namespace std;
bool sortBysecond(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second<p2.second;
}
void print_vector(vector<pair<int,int> > v)
{
    for(auto i: v)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }
}
int main()
{
    vector <int> a;
    a.push_back(1);
    pair<int,int> p;
    p.first = 1;
    p.second = 2;
    vector <pair<int,int> > v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(2,1));
    sort(v.begin(),v.end(),sortBysecond);
    print_vector(v);
}