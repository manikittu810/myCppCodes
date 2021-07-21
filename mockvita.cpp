// //This is The Coding Area
// #include<bits/stdc++.h>
// using namespace std;

// int swayam(string& b,string& g)
// {
//   int ans=0;
//   for(auto  &&x:b){
//     auto f= g.find_first_of(x);
//     if(f!=string::npos){
//       g.erase(f,1);
//     }
//     else
//     {
//       break;
//     }
//   }
//   return ans;
// }
// int main()
// {
//   int n;
//   cin>>n;
//   string b,g;
//   cin>>b>>g;
//   cout<<swayam(b,g)<<endl;
//   return 0;
// }

//This is The Coding Area

// #include<iostream>
// using namespace std;

// int bs(int n)
// {
//   int a,b,c,l,s;
//   int score;
//   a=n%10;
//   n/10;
//   b=n%10;
//   n/10;
//   c=n%10;
//   n=n/10;
//   l=(a>b) ? a : b;
//   l=(c>l) ? c : l;
//   s= (a<b) ? a : b;
//   s= (c<s) ? c : s;
//   score = l*11 + s*7;
//   score=score%100;
//   return score;
// }
// int fp(int sa[],int N)
// {
//   int sd[10],i,pairs=0,msb;
//   for(i=0;i<10;i++)
//   {
//     sd[i]=0;
//   }
//   for(i=0;i<N;i+=2)
//   {
//     msb=sa[i]/10;
//     for(int j=i+2;j<N;j+=2)
//     {
//       if(msb==sa[j]/10)
//       {
//         if(sd[msb]<2)
//         {
//           sd[msb]++;
//         }
//       }
//     }
//   }
//    for(i=0;i<10;i++)
//    {
//      pairs=pairs+sd[i];
//    }
//   return pairs;
  
// }
// int main()
// {
//   int N,i;
//   int ip_arr[501];
//   int sa[501];
//   int pairs;
//   cin>>N;
//   for(int i=0;i<N;i++)
//     sa[i]=bs(ip_arr[i]);
//   pairs = fp(sa, N);
//   cout<<pairs;
//   return 0;
// }

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