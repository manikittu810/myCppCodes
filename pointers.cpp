#include<iostream>
using namespace std;

int main()
{
    int var=5;
    //data_type pointer_name;
    int *ip;
    double *dp;
    float *fp;
    char *ch;
    ip=&var;

    cout<<"variable value:"<<var<<endl;
    cout<<"address in pointer:"<<ip<<endl;
    cout<<"pointer pointing to:"<<*ip<<endl;

    *ip=6;
    cout<<endl;

     cout<<"variable value:"<<var<<endl;
    cout<<"address in pointer:"<<ip<<endl;
    cout<<"pointer pointing to:"<<*ip<<endl;

    return 0;
}