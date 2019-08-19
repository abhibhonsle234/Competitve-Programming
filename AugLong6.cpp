//brute force
//prefix
//digit dp
#include<bits/stdc++.h>
using namespace std;
#define forLoop(i, n) for(ll i=0;i<n;i++)
#define display(ar, i, n) \
            for(ll m=i;m<n;m++)\
            cout<<ar[m].num<<" "
#define displayer(ar, i, n) \
            for(ll m=i;m<n;m++)\
            cout<<ar[m].cou<<" "
#define MOD 1000000007
typedef long long int ll;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll nl, l;
		ll nr, r;
		cin>>nl>>l;
		cin>>nr>>r;
		ll ans = 0;
		for(ll y = l; y<=r; y++)
		{
			ll x = y;
			string ar;
			while(x>0)
			{
		
				ar+=x%10 + 48;
				x/=10;
				//cout<<x<<endl;
		
			}
			reverse(ar.begin(), ar.end());
			//cout<<ar<<endl;	
			ll len = ar.length();
			ll msb = len-1;
			//cout<<"len: "<<len<<endl;
			for(ll i=0; i<len; i++)
			{
				
				if(ar[i]!=ar[i+1])
				{
				    char p = ar[i];
				    ll ind = p;
				    ind = ind - 48;
					//cout<<ind<<" "<<msb<<endl;		
					ans = ans%MOD + ll((ind)*pow(10, msb))%MOD;
					//cout<<"ans: "<<ans<<endl;
					msb = (len-1) - i-1;
				}
			}
		}
		cout<<ans%MOD<<endl;
	}
	
}
