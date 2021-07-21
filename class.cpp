#include "bits/stdc++.h"
using namespace std;
class geeks {
    public:
    string geekname;
    void printName()
    {
        cout<<"Geek Name is :"<<geekname<<endl;
    }
};
int main()
{
    geeks obj;
    obj.geekname="smk";
    obj.printName();
    return 0;
}