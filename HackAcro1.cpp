#include<bits/stdc++.h>
using namespace std;
float search(pair<string,float> word[], string st, int len)
{
	int i=0;
	while(i<len)
	{
		if(st == word[i].first)
		{
			return word[i].second;
		}
		i++;
	}
	return 0;
}
int main()
{
	cout<<"Team CS-A, III year:\nAbhishek Bhonsle\nAman Prajapat\n";
	int t;
	cin>>t;
	if(t<1 or t>100 )
		return 0;
	while(t--)
	{
		string st;
		pair<string, float>word[100];
		int n;
		cin>>n;
		if(n<1 or n>100)
			return 0;
		float ans = 0;
		int i = 0;
		while(n--)
		{
			cin>>st;
			//if(st.length() > 20)
			//	return 0;
			//cout<<st;
			for(int j=0;j<st.length();j++)
			{
				if(st[j] != 'd' and st[j] != 'f' and st[j] != 'j' and st[j] != 'k' )  
				{
					//cout<<"asdsd\n";
					return 0;
				}
			}
			float count = 0;
			if( search(word, st,i) != 0 )
			{
				ans += float( search(word, st,i)/2 );
				//cout<<float( search(word, st,i)/2 )<<endl;
				continue;
			}
			int l = 0;
			while(l <= st.length() - 1)
			{
				if(l==0)
				{
					count += 0.2;
				}
				else if( ( (st[l] == 'd' or st[l] == 'f') and (st[l-1] == 'f' or st[l-1] == 'd') ) or ( (st[l] == 'j' or st[l] == 'k') and (st[l-1] == 'k' or st[l-1] == 'j') ) )
				{
					count += 0.4;
				}
				else
				{
					count += 0.2;
				}
				//cout<<st[l]<<" "<<count<<endl;
				l++;
			}
			//cout<<count<<endl;
			word[i].first = st;
			word[i].second = count;
			i++;
			ans += count;
		}
		cout<<ans*10<<endl;
	}
}
