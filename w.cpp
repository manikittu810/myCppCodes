#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string str;
        getline(cin, str); 
     int v=0,w=0;
    int n = str.length();   
    char char_array[n + 1];
    strcpy(char_array, str.c_str()); 
    char *token = strtok(char_array, " "); 
   int i,x;
    while (token != NULL) 
    { 
        w++;
        printf("%s\n", token); 
        token = strtok(NULL, " "); 
    } 
  
    cout<<w;
    return 0; 
}