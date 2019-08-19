#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n, min, i;
		cin>>n;
		long ar[n];
		for(i=0;i<n;i++)
			cin>>ar[i];
		sort(ar,ar+n);
		min = abs(ar[1] - ar[0]);
		for(i=0;i<n-1;i++)
		{
			//cout<<"min: "<<min<<endl;
			if( min > abs(ar[i+1] - ar[i]) )
			{
				min = abs( ar[i+1] - ar[i] );
			}
		}
		cout<<min<<endl;
	}
}
