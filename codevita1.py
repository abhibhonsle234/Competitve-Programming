#include<bits/stdc++.h>
using namespace std;
int combi(int n)
{
	//cout<<"comb: "<<( n * (n - 1) ) / 2<<endl;
	return ( n * (n - 1 ) ) / 2;
}
int main()
{
	int n,i,j=0,k,p,ans=0;
	cin>>n;
	int ang[n];
	pair<int,int> paral[n];
	for(i=0;i<n;i++)
		cin>>ang[i];
	sort(ang,ang+n);
	/*for(i=0;i<n;i++)
		cout<<ang[i]<<" ";
	cout<<endl;*/
	for(i=0;i<n-1;i++)
	{
		if(ang[i]==ang[i+1])
		{
			paral[j].first = ang[i];
			paral[j].second = 2;
			for(k=i+2;k<n;k++)
			{
				if(paral[j].first == ang[k])
				{
					paral[j].second++;
					i = k-1;
				}
			}
			j++;
		}
	}
	/*for(i = 0; i < n; i++)
	{
		cout<<paral[i].first<<" ";
	}
	cout<<endl;
	for(i = 0; i < n; i++)
	{
		cout<<paral[i].second<<" ";
	}
	cout<<endl;
	cout<<"j: "<<j<<endl;*/
	for(k = 0;k < j-1;k++)
	{
		for(p = k + 1; p < j; p++)
		{
			/*cout<<"ans: "<<ans;
			cout<<"k: "<<k<<"p: "<<p<<endl;
			cout<<"paral[k].second: "<<paral[k].second<<" paral[p].second: "<<paral[p].second<<endl;*/
			ans+=combi( paral[k].second )*combi( paral[p].second );
			//cout<<"ans: "<<ans<<endl;	
		}
	}
	cout<<ans;
}