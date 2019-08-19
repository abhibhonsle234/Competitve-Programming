#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long init, n, sum, i, j, s=0;
		cin>>n;
		long ar[n], count1=0, count2=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]==1)
				count1++;
			else
				count2++;
		}
		//s += count1;
		//sort(ar, ar+n);
		long arS[2*n+1]={0};
		for(i=0;i<n;i++)
		{
			sum = accumulate(ar, ar+i, 0);
			if(sum<=2*n)
			{
				//cout<<"sum: "<<sum<<endl;
				arS[sum] = 1;	
			}
			else if(sum>2*n)
				break;
		}	
		if(count1>0)
			arS[1]=1;
		if(count1>1 || count2>0)
			arS[2] = 1;
		//long s=0;
		for(i=0;i<=2*n;i++)
		{
			if(arS[i]==1)
				s++;
		}
		cout<<s<<endl;
	}
}
