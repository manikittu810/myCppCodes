#include<iostream>
using namespace std;
int main()
{
    int steps,res=0;
    cin>>steps;
    if(steps < 5)
    {
        cout<<1;
    }
    else if(steps%5==0)
    {
        res=steps/5;
        cout<<res;
    }
    else if(steps>5&&steps%5!=0)
    {
        res=(steps/5)+1;
        cout<<res;
    }
    else
    {
        return 0;
    }  

   
}

