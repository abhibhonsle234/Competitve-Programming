#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int bob[n],alice[n],sum1=0,sum2=0;
		int max=-1;
		for(int i=0;i<n;i++)
		{
			cin>>bob[i];
			if(max<bob[i])
			{
				max=bob[i];
			}
			sum1+=bob[i];
		}
		sum1-=max;
		max=-1;
		for(int i=0;i<n;i++)
		{
			cin>>alice[i];
			if(max<alice[i])
			{
				max=alice[i];
			}
			sum2+=alice[i];
		}
		sum2-=max;
		max=-1;
		if(sum1<sum2)
			cout<<"Alice\n";
		else if (sum2<sum1)
			cout<<"Bob\n";
		else 
			cout<<"Draw\n";
	}
}
