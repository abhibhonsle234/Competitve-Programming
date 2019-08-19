#include<bits/stdc++.h>
using namespace std;
void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << ' ' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
int main()
{
	string molecule;
	cin>>molecule;
	int l = molecule.length();
	stack<int>val;
	val.push(-1);
	int temp = 0;
	for(int i=0;i<l;i++)
	{
		switch(molecule[i])
		{
			case '(':
				val.push(0);
				break;
			case 'C':
				val.push(12);
				break;
			case 'H':
				val.push(1);
				break;
			case 'O':
				val.push(16);
				break;
			case ')':
				while(val.top() != 0)
				{
					temp += val.top();
					val.pop();
				}
				val.pop();
				val.push(temp);
				temp = 0;
				break;
			default:
				//cout<<"kya h ye: "<<(int)molecule[i] - '0'<<endl;
				temp = (int)molecule[i] - '0';
				temp = temp * val.top();
				val.pop();
				val.push(temp);
				temp = 0;
				break;
		}
		//showstack(val);
	}
	temp = 0;
	while(val.top() != -1)
	{
		temp += val.top();
		val.pop();
	}
	cout<<temp;
}
