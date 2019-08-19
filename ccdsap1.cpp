#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n;
		cin>>n;
		int ar[n];
		for(i=0;i<n;i++)
			cin>>ar[i];
		sort(ar,ar+n);
		int count = 0;
		for(i=0;i<n;i++)
		{
			//cout<<"flow: "<<i<<endl;
			count+=ar[i]-ar[0];
		}
		cout<<count<<endl;
	}
}
