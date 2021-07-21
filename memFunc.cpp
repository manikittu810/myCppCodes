#include "bits/stdc++.h"
using namespace std;
class geeks{
    public:
    int id;
    string geekName;
    void printName();
    void printId()
    {
        cout<<"GEEK Id : "<<id<<endl;
    }

};
void geeks::printName()
{
    cout<<"GEEK NAME : "<<geekName<<endl;
}
int main()
{
    geeks obj;
    obj.geekName="smk";
    obj.id=50;
    obj.printName();
    obj.printId();
    return 0;
}