#include<bits/stdc++.h>
using namespace std;
int main()
{	//CH(OO)2CO(H(CO)2O)3OH
	string molecule;
	cin>>molecule;
	stack<char> weight;
	map<char, int> atomicWt = {
		{'C', 12},
		{'O', 16},
		{'H', 1},
		{'0', 1},
		{'2', 2},
		{'3', 3},
		{'4', 4},
		{'5', 5},
		{'6', 6},
		{'7', 7},
		{'8', 8},
		{'9',9}
	};
	int l = molecule.length();
	int currWt = 0;
	int brWt = 0;
	char multi = '0';
	for(int i=0;i<l;i++)
	{
		if( molecule[i] != '(' and weight.empty() and ( molecule[i] < '2' or molecule[i] > '9' ) )
		{
			cout<<"direct i: "<<i<<endl;
			currWt += atomicWt[molecule[i]];
		}
		else if(molecule[i] == ')')
		{
			while( !weight.empty() and weight.top() != '(')
			{
				if(weight.top() >= '2' and weight.top() <= '9')
				{
					multi = weight.top();
				}
				else
				{
					brWt += atomicWt[weight.top()] * atomicWt[multi];
					cout<<weight.top()<<" br: "<<brWt<<endl;	
					multi = '0';
				}	
				weight.pop();
			}	
			if(weight.top() == '(')
				weight.pop();
		}
		else if(molecule[i] >= '2' and molecule[i] <= '9' and molecule[i-1] == ')')
		{
			if( weight.empty() and brWt == 0 )
				currWt += atomicWt[molecule[i-1]] * (atomicWt[ molecule[i] ] - 1);
			else
				brWt += brWt * (atomicWt[ molecule[i] ] - 1);
			cout<<"i: "<<i<<" brrrr: "<<brWt<<endl;
		}
		else
		{
			weight.push(molecule[i]);
			cout<<"pushed\n";
		}
		
		if( weight.empty() and ( molecule[i+1] == 'C' or molecule[i+1] == 'H' or molecule[i+1] == 'O' or molecule[i+1] == ')' or molecule[i+1] == '(' or i+1 == l ) )
		{
			cout<<"brWt: "<<brWt<<endl;
			currWt += brWt;
			brWt = 0;
			
		}
		cout<<"i: "<<i<<" "<<currWt<<endl;
	}
	cout<<currWt;
}
