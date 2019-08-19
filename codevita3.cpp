#include<bits/stdc++.h>
using namespace std;
int main()
{	
	long sum = 0;
	int N;
	cin>>N;
	for(int i = 0; i < N; i++)
	{
		long x;
		cin>>x;
		string str = toString(pow(1 << 1, x));
		str = str.length > 2 ? str.substr(str.length - 2) : str;
		stringstream geek(str);
    	int s = 0;
    	geek >> s;
		sum += s;
	}
	return 0;
}

