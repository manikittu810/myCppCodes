#include<iostream>
using namespace std;
int result(int arr[] , int n){
    int ans=0;
    if(n == 1){
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]-arr[i+1] <=1 && arr[i]-arr[i+1] >= -1){
            ans = 0;    
        }
        else{
            ans =1;
            break;
        }
    }
    if(ans == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
int main(){
    int t,n,a[50];
    cin>>t;
    for(int i=0;i<t;i++){
        cin >> n;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        result(a,n);
    }
    return 0;
}