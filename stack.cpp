// #include<bits/stdc++.h>
// using namespace std;
// int n;
// int stack[n];
// int top=-1;
// void push(int n)
// {
//     int stack[n];
//     int top=-1;
//     cin>>n;
//     if(top==n-1)
//     {
//         cout<<"stack overflow";
//     }
//     else
//     {
//         {
//             top++;
//             stack[top]=n;
//         }
//     }
    
// }
// void pop()
// {
//     int temp;
//     if(top==-1){
//             cout<<"underflow";

//     }
//     else{
//         temp=stack[top];
//         top--;
//     }
//     cout<<temp;
// }
// void top()
// {
//     if(top==-1)
//     {
//         cout<<"stack is empty";
//     }
//     else
//     {
//         {
//             cout<<stack[top];
//         }
//     }
    
// }

// void display()
// {
//     int i;
//     for(i=top;i>=0;i--)
//     {
//         cout<<stack[i];
//     }
// }

// int main()
// {
//     int n;
//     int stack[n];
//     int top=-1;
//     int ch;
//     do{
//         cout<<"enter the choice 1.push 2.pop 3.top. 4.display \n";
//         switch(ch)
//         {
//             case 1:push();
//                     break;
//             case 2:pop();
//                 break;
//             case 3:top();
//                 break;
//             case 4:display();
//                 break;
//             default:cout<<"invalid";
//             exit(0);
//         }
//         while(ch!=0)
//     }
//     // return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int stack[100],i,j,choice=0,n,top=-1;
void push();
int pop();
int  peek();
void show();
int main()
{
    cout<<"enter the no. of elements in the stack\n";
    cin>>n;
    cout<<"stack operations using array\n";
    while(choice!=6)
    {
        cout<<"choosenone from below options..\n";
        cout<<"1.push\n2.pop\n3.peek\n4.top\n5.show\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2: pop();
                    break;
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                 peek();
                 break;
            }
            case 5:
            {
                show();
                break;
            }
            case 6:
            {
                cout<<"exiting the stack";
                break;
            }
            default:
            {
                cout<<"invalid";
            }

        };
    }

}
void push(int val, int n)
{
    if(top==n)
    {
        printf("\n overflow");
    }
    else
    {
        cout<<"enter the value:\n";
        cin>>val;
        top=top+1;
        [top]=val;
    }
}

int pop()
{
    if(top==-1)
    {
        cout<<"\n  is empty or underflow";
        return 0;
    }
    else
    {
        top=top-1;
        return [top--];
    }
}

int peek()
{
    if(top==-1)
    {
        cout<<"underflow";
        return 0;
    }
    else
    {
        return [top];
    }
}
void show()
{
    for(i=top;i>=0;--i)
    {
        cout<<stack[i];
    }
    if(top==-1)
    {
        cout<<"stack is empty\n";
 
    }
}