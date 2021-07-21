#include <bits/stdc++.h> 
using namespace std; 
void search(char* pattern, char* text) 
{ 
	int M = strlen(pattern); 
	int N = strlen(text); 

	/* A loop to slide pattern[] one by one */
	for (int i = 0; i <= N - M; i++) { 
		int j; 

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++) 
			if (text[i + j] != pattern[j]) 
				break; 

		if (j == M) // if pattern[0...M-1] = text[i, i+1, ...i+M-1] 
			cout << "Pattern found at index "
				<< i << endl; 
	} 
} 
int main() 
{ int t;
cin>>t;
char text[100];
char pattern[100] ;
while(t--)
{
	cin>>text>>pattern;
	search(pattern, text);
}
	return 0; 
} 
