#include "bits/stdc++.h"
using namespace std;
class car{
    public:
    int number;
    string name;
    float milage;
    void printNumber()
    {
        cout<<"Number : "<<number<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Milage : "<<milage<<endl;

    }
};
int main()
{
    car obj;
    obj.number=12345;
    obj.milage=24.03;
    obj.name="Tesla";
    obj.printNumber();
    return 0;
}