#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long k;
		cin>>n>>k;
		long ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		for(int i=0;i<n;i++)
		{
			if(k>=ar[i])
			{
				k -=ar[i];
				cout<<1;
			}
			else
			{
				cout<<0;
			}
		}
		cout<<endl;
	}
	return 0;
}
