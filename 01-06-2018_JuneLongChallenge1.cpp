#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long double a,b;
	long n;
	cout<<setprecision(6)<<fixed;
	while(t--)
	{
		long count1=0,count2=0;
		cin>>n>>a>>b;
		long double ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]==a)
				count1++;
			if(ar[i]==b)
				count2++;
		}
		cout<<( count1/double(n) )*( count2/double(n) )<<endl;
	}
	return 0;
}
