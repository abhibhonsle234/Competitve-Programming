#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long ar[32], num = 0;
	int j = 0, a = 2, i = 0;
	// array with all possible values til 10^9
	while(i<=32)
		{	
			//cout<<pow(a,i)<<endl;
			num = pow(a,i);
			ar[i] = num;
			i++;
		}
	//cout<<i;
	int t;	
	cin>>t;
	while(t--)
	{
		long long n, prevNum, nextNum, prev = 0, next = 0;
		cin>>n;
		// traverse array
		//cout<<"n: "<<n<<endl;
		if(n == 1)
		{
			cout<<2<<endl;
			continue;
		}
		for(i = 0; i < 31; i++)
		{
			// if n in array print 1 and break 
			if(ar[i] == n)
			{
				cout<<1<<endl;
				break;
			}
			// if n is crossed set current value in array as next and previous as prev
			if(ar[i] > n)
			{
				nextNum = ar[i];
				prevNum = ar[i-1]; 
				break;
			}
		}
		//cout<<prevNum<<" "<<nextNum<<endl;
		// if n in array continue to next case
		if(ar[i] == n)
		{
				continue;
		}
		// find between prev and next
		for(i = 0 ; prev < n ;  i++ )
		{	
			prev = prevNum + ar[i];
		}	
		// if search success full print 0 and move to next case
		if(prev == n)
		{
			cout<<0<<endl;
			continue;
		}
		// if not print steps from closest
		for(j = 0; j < 32; j++)
		{
			if(prev == ar[i])
				prev++;
		}
		next = prev;
		if(i-2 >= 0)
		{
			prev = prevNum + ar[i-2];
			for(j = 0; j < 32; j++)
			{	
				if(prev == ar[i])
					prev++;
			}
		}
		else
			prev = 1;
		//cout<<prev<<" "<<next<<endl;
		if( next - n < n - prev )
			cout<< next - n <<endl;
		else
			cout<< n - prev <<endl;
	}
	return 0;
}
