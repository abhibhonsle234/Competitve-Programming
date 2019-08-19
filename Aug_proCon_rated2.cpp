#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	cout<<setprecision(9)<<fixed;
	while(t--)
	{
		long n;
		cin>>n;
		long double ar[n];
		for(i = 0; i < n; i++)
			cin>>ar[i]; 
		sort(ar, ar+n, greater<int>());
		for(i = 0; i < n-1; i++)
		{
			ar[i+1] = (ar[i]+ar[i+1])/2;
			//sort(ar+i+1, ar+n);
		}
		cout<<ar[n-1]<<endl;
	}
}
