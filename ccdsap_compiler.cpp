#include<bits/stdc++.h>
using namespace std;
long calValid(string exp)
{
	stack<char> st;
	st.push('N');
	long l = exp.length();
	long cunt = 0, ans = 0;
	
	for(long i=0;i<l;i++)
	{
		if(exp[i] == '<')
		{
			st.push('<');
		}
		else if(exp[i] == '>')
		{
			if(st.top() == 'N')
			{
				//cout<<<<endl;
				return ans;
			}
			else if(st.top() == '<')
			{
				cunt += 2;
				st.pop();
				if(st.top() == 'N')
					ans = cunt;
			}
		}
	}
	return ans;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string exp;
		cin>>exp;
		cout<<calValid(exp)<<endl;
	}
}

// <<<<>>>>
// <><><<>><><><>
// <<>><<>
// <<<<<<<<<<>>
// ><><><><><>
// <><><><>>><>
