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
    /*void printprivatedata(){
       cout<<"z:"<<z<<endl; 
    }*/
    protected:
     int y;
    private:
     int z;
};


class myderivedclass:private mybaseclass{
    public:
    int x;
 /*void printprotecteddata(){
       cout<<"y:"<<y<<endl; 
    }
    void printprivatedata(){
       cout<<"z:"<<z<<endl; 
    }
    protected:
     int y;
    private:
     int z;*/
     
};

class myderivedclass3:public myderivedclass{

};


void myoutsidefunction(mybaseclass obj){
cout<<"x:"<<obj.x<<endl;
obj.printprotecteddata();
//obj.printprivatedata();
}


int main(){
mybaseclass obj1;
myderivedclass obj2;
cout<<"x:"<<obj2.x<<endl;
//myoutsidefunction(obj1);
return 0;
}