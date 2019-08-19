#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, i, j;
	cin>>t;
	int n, fl;
	while(t--)
	{
		fl = 0;
		cin>>n;
		int ar[n], dusra[n+1];
		for(i=1;i<n+1;i++)
			{
				cin>>ar[i];	
			}
		set<int> s{begin(ar), end(ar)};
		//sort(ar+1,ar+n+1);
		for (std::set<int>::iterator it=s.begin(); it!=s.end(); ++it)
		{
			for(std::set<int>::iterator jt=it++; jt!=s.end(); ++jt)
			{
				cout<<"*it: "<<*it<<"*jt: "<<*jt;
				if( *it == *jt )
				{
					cout<<"Truly Happy\n";
					fl=1;
					break;
				}
			}
		}
		if(fl==0)
			cout<<"Poor Chef\n";
	}
	return 0;
}
