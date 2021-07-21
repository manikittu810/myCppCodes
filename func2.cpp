 #include<iostream>
 using namespace std;
 int max(int a,int b);//foward declaration

 int main()
 {
     int a,b;
     cout<<"enter two numbers to find greatest:"<<endl;
     cin>>a>>b;
    int c=max(a,b);
    cout<<c<<endl;
    cout<<max(5,6);
     return 0;

 }
  int max(int x, int y)
 {
     if(x>y)
     {
         return x;
     }
     else
     {
         return y;
     }
     
 }


 