#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string ar[3][3],a;
		cin>>a;
		ar[0][0] = a[0];
		ar[0][1] = a[1];
		ar[0][2] = a[2];
		cin>>a;
		ar[1][0] = a[0];
		ar[1][1] = a[1];
		ar[1][2] = a[2];
		/*for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				cin>>ar[i][j];
			}
		}*/
		//Decision tree rooted at bo
		if( (ar[0][0] == "b" && ar[1][0] == "o") || (ar[0][0] == "o" && ar[1][0] == "b") )
		{
			if( (ar[0][1] == "b" && ar[1][1] == "o") || (ar[0][1] == "o" && ar[1][1] == "b") )
			{
				if(ar[0][2] == "b" || ar[1][2] == "b" || ar[0][2] == "o" || ar[1][2] == "o")
				{
					cout<<"yes\n";
					continue;	
				}
				else
				{	
					cout<<"no\n";
					continue;
				}
			}
			else if(ar[0][1] == "o" || ar[1][1] == "o")
			{
				if(ar[0][2] == "b" || ar[1][2] == "b")
				{
					cout<<"yes\n";
					continue;	
				}
				else
				{	
					cout<<"no\n";
					continue;
				}
			}
			else if(ar[0][1] == "b" || ar[1][1] == "b")
			{
				if(ar[0][2] == "b" || ar[1][2] == "b" || ar[0][2] == "o" || ar[1][2] == "o")
				{
					cout<<"yes\n";
					continue;	
				}
				else
				{	
					cout<<"no\n";
					continue;
				}
			}
			else
			{		
				cout<<"no\n";
				continue;
			}
		}
		//Decision Tree rooted at o
		else if(ar[0][0] == "o" || ar[1][0] == "o")
		{
			if(ar[0][1] == "b" || ar[1][1] == "b")
			{
				if(ar[0][2] == "b" || ar[1][2] == "b")
				{
					cout<<"yes\n";
					continue;
				}
				else
				{
					cout<<"no\n";
					continue;
				}
			}
			else
			{
				cout<<"no\n";
				continue;
			}
		}
		// decion tree rooted at b 
		else if(ar[0][0] == "b" || ar[1][0] == "b")
		{
			if( (ar[0][1] == "b" && ar[1][1] == "o") || (ar[0][1] == "o" && ar[1][1] == "b") )
			{
				if(ar[0][2] == "b" || ar[1][2] == "b" || ar[0][2] == "o" || ar[1][2] == "o")
				{
					cout<<"yes\n";
					continue;
				}
				else
				{
					cout<<"no\n";
					continue;
				}
			}
			else if(ar[0][1] == "o" || ar[1][1] == "o")
			{	
				if(ar[0][2] == "b" || ar[1][2] == "b")
				{
					cout<<"yes\n";
					continue;
				}
				else
				{
					cout<<"no\n";
					continue;
				}
			}
			else if(ar[0][1] == "b" || ar[1][1] == "b")
			{	
				if(ar[0][2] == "o" || ar[1][2] == "o")
				{
					cout<<"yes\n";
					continue;
				}
				else
				{
					cout<<"no\n";
					continue;
				}
			}
			else
			{
				cout<<"no\n";
				continue;
			}
		}
		else
		{	
			cout<<"no\n";
			continue;
		}		
	}
	return 0;
}
