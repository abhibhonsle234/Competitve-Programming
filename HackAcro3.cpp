#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Team CS-A, III year:\nAbhishek Bhonsle\nAman Prajapat\n";
	int n;
	cin>>n;
	if(n<2 or n>100)
		return 0;
	int ar[n];
	int i;
	int jumps = 0;
	for(i=0;i<n;i++)
		cin>>ar[i];
	if(ar[0] == 1)
		return 0;
	if(n==2 or n == 3)
		{
			cout<<1;
			return 0;	
		}
	for(i=0;;)
	{
		if(ar[i+2] == 0)
		{
			i = i + 2;
			jumps++;
		}
		else if(ar[i+1] == 0)
		{
			i = i + 1;
			jumps++;
		}
		//cout<<"i: "<<i<<endl;
		//cout<<"jumps: "<<jumps<<endl;
		if(i==n-1)
			break;
	}
	cout<<jumps;
}
