#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  nc(int l,int w) {
  
  if(w == 1)
    return l;
  if(l==w)
    return 1;
  int p = l-w;
  return 1+ nc(max(p,w),min(p,w));
}

int main() {
  
  int l;
  int w;
  int x;
  int y;
  cin>>l>>w>>x>>y;
  int t =0;
  for(int i=l;i<=w;i++){
    for(int j=x;j<=y;j++) {
      
      
      t+= nc(max(i,j),min(i,j));
    }
  }
  cout<<t<<endl;
  
  
  return 0;
  
}