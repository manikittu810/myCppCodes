#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	int high=0,low=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        high++;
	    }else{
	        	low++;
	    }
	}
	if(high>low){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
	return 0;
}