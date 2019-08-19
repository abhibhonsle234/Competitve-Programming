#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,aage,piche;
		cin>>n;
		int x=0;
		if(x==n)
			{
				cout<<0<<endl;
				continue;
			}
		for(int i=1;;)
		{
			x=x+i;
			//cout<<"x: "<<x<<endl;
			if(x==n)
				{
					cout<<i<<endl;
					break;
				}
			if(x>n)
			{
				piche=i;
				piche+=x-n;
				x=x-i;
				aage=i-1;
				aage+=n-x;
				if(piche<aage)
					{
						cout<<piche<<endl;
						break;
					}
				else
					{
						cout<<aage<<endl;
						break;
					}	
			}
			i++;
		}
	}
}
