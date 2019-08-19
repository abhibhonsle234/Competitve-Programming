#include<bits/stdc++.h>
using namespace std;
union bag
{
	double we;
	double po;
	double pos;
}bg[5];
int main()
{
	for(int i=0;i<5;i++)
	{
		cin>>bg[i].we;
		cin>>bg[i].po;
	}
	double ratio[5];
	for(int i=0;i<5;i++)
	{
		ratio[i]=bg.po[i]/bg.we[i];
		bg[i].pos=ratio[i];
	}
	sort(ratio,ratio+5);
	if(int i=0;i<5;i++)
	{
		if(ratio[i]==bg[i].pos)
			sorted[i]=bg[i].we
	}
	
}
