#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a;
		int count = 0;
		while(n--)
		{
			cin>>a;
			if((a+k)%7==0)
				count++;
		}
		cout<<count<<endl;
	}
}
