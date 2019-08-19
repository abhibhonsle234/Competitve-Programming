#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,i,j,min,max,fl=0;
		cin>>n>>m;
		long long ar[n+2][m+2]={0};
		for(i=n+1,j=0;j<=n+1;j++)
		{
			ar[i][j]=2,000,000,001;
			ar[j][i]=2,000,000,001;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cin>>ar[i][j];
			}
		}
		for(i=0;i<=n+1;i++)
		{
			for(j=0;j<=m+1;j++)
			{
				cout<<ar[i][j]<<" ";
			}
			cout<<endl;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(ar[i+1][j]==-1||ar[i][j+1]==-1)
				{
					ar[i+1][j]=2,000,000,001;
					ar[i][j+1]=2,000,000,001;
				}
				if(ar[i][j]==-1||ar[i][j]==2,000,000,001)
				{
					if(ar[i-1][j]<ar[i][j-1])
						min=ar[i-1][j];
					else 
						min=ar[i][j-1];
					
					if(ar[i][j+1]<ar[i+1][j])
						max=ar[i][j+1];
					else
						max=ar[i+1][j];
					
					ar[i][j]=rand()%(max-min + 1) + min;
				}
				
				if(ar[i+1][j]<ar[i][j]||ar[i-1][j]>ar[i][j]||ar[i][j+1]<ar[i][j]||ar[i][j-1]>ar[i][j])
				{
					cout<<-1<<endl;
					fl=1;
					break;
				}
			}
			if(fl==-1)
				{
					fl=0;
					break;
				}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cout<<ar[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
