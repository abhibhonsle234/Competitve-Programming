#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long i, j, n, x, count=0, bigCount=0;
		cin>>n;
		long ar[n];
		for(i=0;i<n;i++)
			cin>>ar[i];
		sort(ar, ar+n);
		i = 0;
		while(ar[i]<=n)
		{
			count = 0;
			if(ar[i]==ar[i+1])
			{
				x = ar[i];
				//cout<<"x: "<<x<<endl;
				for(j=i;ar[j]<=n;j++)
				{
					if(x==ar[j])
						count++;
					else
						break;
				}
				i = j-1;
			}
			//cout<<"count: "<<count<<endl;
			if(count>0)
				bigCount+=count-1;
			//cout<<"bigCount: "<<bigCount<<endl;
			i++;
		}
		//cout<<"n: "<<n<<"i: "<<i<<endl;
		if(i<=n)
			bigCount+= n - i;
		cout<<bigCount<<endl;
	}
	return 0;
}
