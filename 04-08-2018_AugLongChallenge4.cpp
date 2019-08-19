#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b,n,powe,mod;
		cin>>a>>b>>n;
		powe = pow(a,n)+pow(b,n);
		mod = a-b;
		cout<<__gcd(powe, mod)%1000000007<<endl;
	}
	return 0;
}
