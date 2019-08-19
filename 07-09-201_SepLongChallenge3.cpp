#include<bits/stdc++.h>
using namespace std;
long calPairs(long long ar[],long n,int parity)
{
	int par;
	if(parity == 0)
		par = 0;
	else
		par = 1;
	long i,j,count = 0,sameCount = 0, wrongCount = 0, primary, secondary;
	long long x;
	sort(ar,ar+n);
	for(i=0;i<n;i++)
	{
		primary = 0;
		secondary = 0;
		if( ar[i]%4 == par )
		{ 
			x = ar[i];
			//cout<<"x : "<<x<<endl;
			for(j=i;;j++)
			{
				if( ar[j] == x )
					primary++;
				else if( ar[j] - x == 2)
					secondary++;
				else
					break;
			}
			//cout<<"primary : "<<primary<<" secondary : "<<secondary<<endl;
			if(secondary==0)
				sameCount+=primary*(primary-1)/2;
			else
			{
				sameCount += primary*(primary-1)/2 + secondary*(secondary-1)/2;
				wrongCount += primary * secondary;
			}
			i=j-1;
			/*cout<<"sameCount : "<<sameCount<<endl;
			cout<<"wrongCount : "<<wrongCount<<endl;
			cout<<"i : "<<i<<endl;*/
		}
		else if(ar[i] % 4 == par+2)
		{
			x = ar[i];
			for(j=i;;j++)
			{
				if(ar[j] == x)
					primary++;
				else
					break;	
			}
			sameCount += primary*(primary-1)/2;
			//cout<<ar[i]<<"primary : "<<primary<<" sameCount : "<<sameCount<<endl;
			i=j-1;
		}
	}
	count = n*(n-1)/2 - sameCount - wrongCount;
	/*for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			a = ar[i] xor ar[j];
			//cout<<ar[i]<<" xor "<<ar[j]<<" : "<<a<<endl;
			if( ( a ) % 2 == 0 && a > 2 )
				count++;
		}
	}*/
	//cout<<"count : "<<count<<endl;
	return count;
}
int  main()
{
	int t;
	long n,i,j,count,k;
	cin>>t;
	while(t--)
	{
		count = 0;
		k=j=0;
		cin>>n;
		long long ar[n],x,ev[n],od[n];
		int a;
		for(i = 0; i < n; i++)
			cin>>ar[i];
		//sort(ar, ar+n);
		//x = ar[0];
		for(i=0;i<n;i++)
		{
			if(ar[i]%2==0)
			{
				ev[j]=ar[i];
				j++;
			}
			else
			{
				od[k]=ar[i];
				k++;
			}
		}
		/*for(i=0;i<j;i++) 3 + 5 * 6 - 2 / 4
			cout<<ev[i]<<" ";
		cout<<endl;
		for(i=0;i<k;i++)
			cout<<od[i]<<" ";*/
		cout<<calPairs(ev,j,0) + calPairs(od,k,1)<<endl;
		//cout<<count<<endl;
	}
	return 0;
	//edureka_396501sho7h
	
	/*from sklearn.preprocessing import StandardScaler
		ss = StandardScaler()*/
	
}
