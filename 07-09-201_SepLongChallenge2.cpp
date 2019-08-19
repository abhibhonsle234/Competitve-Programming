#include<iostream>
using namespace std;
int main()
{
	int t;
	long long n, m, x, y;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>x>>y;
		n--;
		m--;
		if( n % x == 0 && m % y == 0 )
			cout<<"Chefirnemo\n";
		else if( n % x == 1 && m % y == 1 )
			cout<<"Chefirnemo\n";
		else if ( x == 1 && m % y == 1 && n != 0 )
			cout<<"Chefirnemo\n";
		else if ( y == 1 && n % x == 1 && m != 0 )
			cout<<"Chefirnemo\n";
		else
			cout<<"Pofik\n";
	}
	return 0;
}
