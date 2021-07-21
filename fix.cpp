// #include "bits/stdc++.h"
// using namespace std;
// int main()
// {
//     static int i=5;
//     if(--i)
//     {
//         cout<<i<<" ";
//         main();
// }
//     }
   

// #include "bits/stdc++.h"
// using namespace std;
// int f()
// {
//     static int n=16;
//     return n--;
// }
// int main()
// {
//     int i;
//     for(f();f();f())
//     {
//         int n=f();
//         cout<<n<<" ";
//     }
//     return 0;
// }


// #include "bits/stdc++.h"
// using namespace std;
// int f(int n)
// {
//     static int r=0;
//     if(n<=0)
//         return 1;
//     if(n>3)
//     {
//         r=n;
//         return f(n-2)/2;
//     }
//     return f(n-1)+r;
// }
// int main()
// {
//     cout<<f(5)<<endl;
//     return 0;
// }

// #include "bits/stdc++.h"
// using namespace std;
// int main()
// {
//     int n=returns(sizeof(float));
//     cout<<++n;
//     return 0;
// }
// int returns(int returns)
// {
//     returns+=5.01;
//     return (returns);
// }

#include "bits/stdc++.h"
using namespace std;
void decToBin(int n)
{
    int a[32];
    int i=0;
    while(n)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    for(int k=i-1;k>=0;k--)
        cout<<a[k]<<" ";
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        decToBin(n);
    }
    return 0;
}