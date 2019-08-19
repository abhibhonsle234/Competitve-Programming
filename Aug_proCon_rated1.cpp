#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,k,max=0;
		cin>>n>>k;
		int ar[n], currSum = 0;
		for(i = 0; i < n; i++)
			cin>>ar[i];
		if(k == n)
			{
				cout<<accumulate(ar, ar+n, 0)<<endl;
				continue;
			}
		max = accumulate(ar, ar+k, 0);
		for(j = 0; k+j <= n; j++)
		{
			currSum = accumulate(ar+j, ar+k+j, 0);
			//cout<<"max: "<<max<<endl;
			//cout<<"currSum: "<<currSum<<endl;
			if(currSum>max)
				max = currSum;
		}
		cout<<max<<endl;
	}
}

