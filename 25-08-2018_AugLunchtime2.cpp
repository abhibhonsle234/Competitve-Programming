#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m, ansFlag = 0, i, count=0;
		cin>>n>>m;
		string a, b;
		//char c[m];
		while(n--)
		{	
			if(ansFlag == 0 || ansFlag == 2)
			{
				cin>>a;
				if(a=="correct")
				{
					//cout<<"ansFlag: "<<ansFlag<<endl;
					//cout<<"a: "<<a<<endl;
					cin>>b;
					//strcpy(c, b.c_str());
					for(i=0;i<m;i++)
					{
						//cout<<"i: "<<i<<endl;
						if( b[i] == '0')
							ansFlag = 1;		
					}		
				}
				else if(a=="wrong")
				{
					//cout<<"ansFlag: "<<ansFlag<<endl;
					//cout<<"a: "<<a<<endl;
					cin>>b;
					//strcpy(c, b.c_str());
					count = 0;
					for(i=0;i<m;i++)
					{
						//cout<<"i: "<<i<<endl;
						//cin>>b;
						if( b[i] == '1' )
							count++;
						//cout<<"count: "<<count<<endl;
					}
					if(count==m)
						ansFlag = 2;
				}	
			}
			else
			{	
				cin>>a;
				cin>>b;
			}
		}
		switch(ansFlag)
		{
			case 0:
				cout<<"FINE\n";
				break;
			case 1:
				cout<<"INVALID\n";
				break;
			case 2:
				cout<<"WEAK\n";
				break;
			default:
				break;
		}
	}
	return 0;
}
