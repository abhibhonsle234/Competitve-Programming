#include<iostream>
using namespace std;
/*void printSum()
{
	int t=700;
	int sum=0;
	while(t!=0)
	{
		sum+=t;
		t--;
	}
	cout<<sum<<endl;
}*/
int main()
{
	//printSum();
	int n, c;
	cin>>n>>c;
	int y=0, startPt = 1, endPt = n;
	int grader = 0, flag = 0;
	int coins = 1000 - (2*c);
	while(grader != 1 and y+coins <= n)					// 1500 150  
	{				
		if(flag == 0)
			flag = 1;
		startPt = y;
		y = y + coins;
		coins--;
		cout<<1<<" "<<y<<endl;
		cin>>grader; 
	}
	if(flag == 1)
	{
		if(grader == 1)
			cout<<2<<endl;
		int endPt = y;
		y = startPt;
		grader = 0;	
	}
	while(grader != 1 and y < endPt)
	{
		y+=1;
		cout<<1<<" "<<y<<endl;
		cin>>grader;
	}
	if(grader == 1)
	{
		cout<<2<<endl;
		cout<<3<<" "<<y-1<<endl;
	}
	else
		cout<<3<<" "<<y<<endl;
	
	return 0;
}

/* 700 700+699 700+699+698
if n <= (1000-c):
	y = 1
	while(grader != 1):
		print(1, y)
		y+=1
	print(2)
	print(3, y-1)
*/
