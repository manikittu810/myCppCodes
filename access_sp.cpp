#include<iostream>
using namespace std;


class mybaseclass{
    public:
    int x;
    mybaseclass()
    {
        x=5;
        y=5;
        z=5;
    }
    void printprotecteddata(){
       cout<<"y:"<<y<<endl; 
    }
    void printprivatedata(){
       cout<<"z:"<<z<<endl; 
    }
    protected:
     int y;
    private:
     int z;
};



void myoutsidefunction(mybaseclass obj){
cout<<"x:"<<obj.x<<endl;
obj.printprotecteddata();
obj.printprivatedata();
}


int main(){
mybaseclass obj1;
myoutsidefunction(obj1);
return 0;
}