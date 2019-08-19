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
		ll rad[n+2]={0};
		ll c[n+1];
		forLoop(1, n+1)//O(n)0
		{
			cin>>c[i];
			ll low = (i-c[i])>1?(i-c[i]):1;
			ll high = (i+c[i])>n?n:(i+c[i]);
			//cout<<low<<" "<<high<<endl;
			rad[low]++;
			rad[high+1]--;
		}
		
		ll h[n+1];
		forLoop(1, n+1)
			cin>>h[i];
		
		forLoop(2, n+1)
			rad[i] = rad[i-1] + rad[i];
			
		 forLoop(1, n+1)
			cout<<rad[i]<<" ";
		cout<<endl;
		
		sort(rad+1, rad+n+1, greater<int>());
		sort(h+1, h+n+1, greater<int>());
		/*forLoop(1, n+1)
			cout<<h[i]<<" ";
		cout<<endl;*/
		
		int flag=0;
		forLoop(1, n+1)
		{
			if(rad[i] != h[i])
			{
				flag = 1;
				break;
			}		
		}
		if(flag)
			cout<<"NO\n";
		else
			cout<<"YES\n";		
	}
}
