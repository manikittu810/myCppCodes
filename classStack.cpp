#include "bits/stdc++.h"
using namespace std;
class Stack{
private:
int top;
int a[5];
public:
Stack()
{
    top=-1;
    for(int i=0;i<5;i++)
    {
        a[i]=0;
    }
}
bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}
 bool isFull()
 {
     if(top==5)
        return true;
    else
        return false;
 }
 void push(int val)
 {
     if(isFull())
     {
         cout<<"Stack overflow"<<endl;
     }
     else
     {
         a[++top]=val;
     }
 }
 int pop()
 {
     if(isEmpty())
         {
            cout<<"Stack underflow"<<endl;
         return 0;
         }
     else{
        int poppedVal=a[top];
        a[top]=0;
        top--;
        return poppedVal;
     }
 }
 void change(int pos,int val)
 {
     a[pos]=val;
     cout<<"Item changed at location : "<<pos<<endl;

 }
 int peek(int pos)
 {
     if(isEmpty())
     {
         cout<<"Stack underflow"<<endl;
         return 0;
     }
     else
        return a[pos];
 }
 int count()
 {
     return (top+1);
 }
 void display()
 {
     cout<<"All values in Stack are : "<<endl;
     for(int i=5;i>=0;i--)
     {
         cout<<a[i]<<" ";
     }
 }
};

int main()
{
    Stack s1;
    int option ,position ,value;
    do{
        cout<<"Select an option .Enter 0 to Exit"<<endl;
        cout<<"1.push()"<<endl;
        cout<<"2.pop()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.peek()"<<endl;
        cout<<"6.count()"<<endl;
        cout<<"7.change()"<<endl;
        cout<<"8.display()"<<endl;
        cout<<"9.Clear screen."<<endl;
        cin>>option;
        switch(option)
        {
            case 0: 
                break;
            case 1:
                cout<<"enter an item to push onto the Stack : "<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"pop function called-Popped Value : "<<s1.pop()<<endl;
                break;
            case 3:
                if(s1.isEmpty())
                {
                    cout<<"Stack is Empty"<<endl;
                }
                else
                    cout<<"Stack is not empty"<<endl;
                break;
            case 4:
                if(s1.isFull())
                {
                    cout<<"Stack is Full"<<endl;
                }
                else
                    cout<<"Stack is not full"<<endl;
                break;
            case 5:
                cout<<"Enter an element you want to peek :"<<endl;
                cin>>position;
                cout<<"peek function called"<<position<<"is"<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<"No. of items in the Stack : "<<s1.count()<<endl;
                break;
            case 7:
                cout<<"Change function called-"<<endl<<"Enter the position you want to change : ";
                cin>>position;
                cout<<"Enter the value of item you want to change:";
                cin>>value;
                s1.change(position,value);
                break;
            case 8:
                cout<<"Display function called : "<<endl;
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Enter proper option :)"<<endl;
        }
    }while(option!=0);
    return 0;
}