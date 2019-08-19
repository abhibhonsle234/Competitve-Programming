#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long a, b, d;
	cin>>t;
	assert(t >= 1 and t <= 1000);
	while(t--)
	{
		cin>>a>>b;
		assert(a >= 1 and a <= 1000000000 and b >= 1 and b <= 1000000000 );
		/*while(a!=b)
		{
			d = abs(a - b);
			if(a>b)
			{
				a = a + d - 1;
				b = b + d; 
			}
			else
			{
				a = a + d;
				b = b + d - 1;
			}
			cout<<"a: "<<a<<" b: "<<b<<endl;
		}*/
		cout<<"YES\n";
	}
	return 0;
}
