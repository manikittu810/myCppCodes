#include "bits/stdc++.h"
using namespace std;
class operation{
    int add,sub,mul,a,b;
    float div;
    public:
        void get();
        void sum();
        void diff();
        void prod();
        void division();
};
inline void operation :: get()
{
    cout<<"Give inputs : \n";
    cin>>a>>b;
}
inline void operation :: sum()
{
    add=a+b;
    cout<<"a+b:"<<a+b<<endl;
}
inline void operation :: diff()
{
    sub=a-b;
    cout<<"a-b:"<<a-b<<endl;
}
inline void operation :: prod()
{
    mul=a*b;
    cout<<"a*b:"<<a*b<<endl;
}
inline void operation :: division()
{
    div=a/b;
    cout<<"a/b:"<<a/b<<endl;
}
int main()
{
    operation obj;
    obj.get();
    obj.sum();
    obj.diff();
    obj.prod();
    obj.division();
    return 0;
}
