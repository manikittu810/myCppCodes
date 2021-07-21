#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long T, n, a, b, x, y, c1, d1, c2, d2;
	cin>>T;
	while(T--)
	{
		cin>>a>>b>>x>>y>>n;
		c1=max(a-n, x);
		d1=max(y, b-(n-(a-c1)));
		d2=max(b-n, y);
		c2=max(x, a-(n-(b-d2)));
		cout<<min(c1*d1, c2*d2)<<endl;
	}
	return 0;
}