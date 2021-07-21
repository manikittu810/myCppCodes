 #include<iostream>
 using namespace std;
int rec(int length, int breadth)
{
    int l,b,area;
    l=length;
    b=breadth;
    area=l*b;
    return area;
}


 int main()
 {
     int area,l,b;
     area=rec(8,9);
     
     cout<<"area:"<<area<<endl;
     return 0;
 }