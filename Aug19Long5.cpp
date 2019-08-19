#include<bits/stdc++.h>
using namespace std;
#define forLoop(k, n) for(ll i=k;i<n;i++)
#define display(ar, i, n) \
            for(ll m=i;m<n;m++)\
            cout<<ar[m].num<<" "
#define displayer(ar, i, n) \
            for(ll m=i;m<n;m++)\
            cout<<ar[m].cou<<" "
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll ar[n];
		forLoop(0, n)
			cin>>ar[i];
			
		ll roxx = 0;
		forLoop(0, n)
		{
			roxx^=ar[i];
			cout<<roxx<<" ";
		}
		cout<<endl;
		
		ll count = 0;
		ll xorr = 0;
		for(ll i=0; i<n;i++)
		{
			for(ll j=i;j<n;j++)
			{
				xorr^=ar[j];
				if(xorr==0)
				{
					cout<<i<<" "<<j<<endl;
					count+=j-i;
				}
			}
			xorr=0;
		}
		cout<<count<<endl;
	}
}
