#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;

 bool f(int x,int y)
 {
     return x>y;
 }
// int gquiz1;
int main()
{
    //c++STL
    // int gquiz1;
    vector<int> a={11,2,3,14};
    cout<<a[1]<<endl;
    sort(a.begin(),a.end());//o(NlogN)
    //sorted 2,3,11,14
    //o(NlogN)
    bool present=binary_search(a.begin(),a.end(),3);//true
     present=binary_search(a.begin(),a.end(),4);//false
    a.push_back(100);
    present=binary_search(a.begin(),a.end(),100);
    //2,3,11,14,100
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(123);
//lower bound
    vector<int>::iterator it=lower_bound(a.begin(),a.end(),100);//>=
    vector<int>::iterator it2=upper_bound(a.begin(),a.end(),100);//>
    cout<<*it<<" "<<*it2<<""<<endl;
    cout<<it2-it<<endl;//o(1)//gives  count=5
    sort(a.begin(),a.end(),f);
    vector<int>:: iterator it3 ;
    for(it3=a.begin();it3!=a.end();it3++)
    {
        cout<<*it3<<" ";//items sorted in descending order

    }
    cout<<endl;
}