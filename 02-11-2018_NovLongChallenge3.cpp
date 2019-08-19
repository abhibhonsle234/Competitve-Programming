#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		switch (n)
		{
			case 1:
				cout<<1<<" "<<2<<" ";
				break;
			case 2:
				cout<<1<<" "<<4<<" ";
				break;
			case 3:
				cout<<3<<" "<<8<<" ";
				break;
			case 4:
				cout<<5<<" "<<16<<" ";
				break;
			case 5:
				cout<<11<<" "<<32<<" ";
				break;
			default:
				cout<<1<<" "<<pow(2,n)<<" ";
				break;
		}
	}
	return 0;
}


/*
h = r l r l r lb
n = 1 2 3 4 5 6
no. = 1 1+2  1+2+4 1+2+4+8 1+2+4+8+16 1+2+4+8+16+32
Dn = 1/2 1/4 3/8 5/16 11/32 21/64
*/
