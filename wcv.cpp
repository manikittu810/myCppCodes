# include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string str;
    int y=0;
    int c=-1,v=-1,w=-1;
    string t;
    getline(cin,t);
    int x=stoi(t);
    
    for(y=0;y<x;y++)
    {
              c=0, v=0,w=0;
            getline(cin, str); 
            
            int n = str.length();   
            char char_array[n + 1];
            strcpy(char_array, str.c_str()); 
             char *token = strtok(char_array, " "); 
            int i;
            while (token != NULL) 
            { 
                ++w;
                for(i=0;token[i]!='\0';i++)
                {               if(token[i]=='a'||token[i]=='e'||token[i]=='i'||token[i]=='o'||token[i]=='u'||token[i]=='A'||token[i]=='E'||token[i]=='I'||token[i]=='O'||token[i]=='U')
            ++c;
                else
             ++v;
            }
        token = strtok(NULL, " "); 
    } 
  
        cout<<w<<" ";
    cout<<c<<" ";
    cout<<v<<" ";
    cout<<"\n";
    }
     return 0;
}