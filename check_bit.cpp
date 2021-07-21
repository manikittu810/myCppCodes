#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n;
    cin>>n;
    cin>>i;
    //for(i=0;i<=n;i++)
    if(i<=63){
        if(i<=n){
            cout<<"true";
        }
    }
    else{
            cout<<"false";
        }
    return 0;
}
