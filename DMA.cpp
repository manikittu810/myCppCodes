#include<iostream>
using namespace std;
int main(){
int size;
int *ptr;
 cout<<"enter thre no. of values you want to store (size of array):"<<endl;

cin>>size;

ptr=new int[size];
cout<<"enter the array values:"<<endl;
for(int i=0;i<size;i++)
{
    cin>>ptr[i];
}

cout<<"the array values:"<<endl;
for(int i=0;i<size;i++)
{
    cout<<ptr[i]<<endl;
}
    return 0;
}