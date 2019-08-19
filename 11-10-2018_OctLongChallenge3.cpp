#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node
{
	ll a;
	ll b;
	ll cost;
};
bool sortByCost(struct node baloon1, 
              struct node baloon2) 
{ 
    return (baloon1.cost > baloon2.cost); 
} 
bool maxByCost(struct node a, struct node b) 
{ 
    return (a.cost < b.cost); 
}
bool minByCost(struct node a, struct node b) 
{ 
    return (a.cost < b.cost); 
} 
 
int main()
{
	long n,i;
	ll m;
	cin>>n>>m;
	struct node baloon[n];
	
	for(i=0;i<n;i++)
		cin>>baloon[i].a;	
	for(i=0;i<n;i++)
	{
		cin>>baloon[i].b;
		baloon[i].cost = baloon[i].a * baloon[i].b;
	}
	sort(baloon, baloon+n, sortByCost);
	ll c = 0;
	i = 0;
	while(m>0)
	{
		if(baloon[i].a > 0)
		{
			baloon[i].a -= 1;
			baloon[i].cost -= baloon[i].b;
			m-=1;
		}
		else
		{
			i++;
		}
		if(i==n && m>0)
		{
			cout<<0;
			return 0;
		}
	}	
	
	ll oldCost;	
	if(i!=0 && baloon[i].cost != 0)
	{
		struct node* maxCost = max_element(baloon, baloon+i+1, maxByCost);
		struct node* minCost = min_element(baloon, baloon+i+1, minByCost);
		//cout<<"minCost->cost: "<<minCost->cost<<endl;
		//cout<<"maxCost->cost: "<<maxCost->cost<<endl;
		do
		{
			oldCost = maxCost->cost;
			minCost->cost += minCost->b;
			maxCost->cost -= maxCost->b;
			//cout<<"i: "<<i<<endl;
			//for(ll j=0;j<n;j++)
				//cout<<baloon[j].cost<<" ";
			//cout<<endl;
			minCost = min_element(baloon, baloon+i+1, minByCost);
			maxCost = max_element(baloon, baloon+i+1, maxByCost);
			
			//cout<<"oldCost"<<oldCost<<endl;
			//cout<<"minCost->cost: "<<minCost->cost<<endl;
			//cout<<"maxCost->cost: "<<maxCost->cost<<endl;
		}
		while(oldCost <= maxCost->cost);	
		
		minCost->cost += minCost->b;
		maxCost->cost -= maxCost->b;
	}
	
	//////////////////////////////////////////////////////////////////////////////////
	
	/*for(ll j=0;j<n;j++)
		cout<<baloon[j].cost<<" ";
	cout<<endl;
	
	cout<<"process starts\n\n\n";*/
	///////////////////////////////////////////////////////////////////////////////////
	
	if(i==0)
		c=1;
	else
		c=i+1;
		
	//cout<<"i: "i<<endl;
	struct node* maxCost_postPivot;
	struct node* minCost_tillPivot;
	//struct node* maxCost_tillPivot = max_element(baloon, baloon+c, maxByCost);
	ll newCost = max_element(baloon, baloon+n, maxByCost)->cost;
	//cout<<"minCost_tillPivot->cost: "<<minCost_tillPivot->cost<<endl;
	//cout<<"maxCost_postPivot->cost: "<<maxCost_postPivot->cost<<endl;
	//cout<<"maxCost_tillPivot->cost: "<<maxCost_tillPivot->cost<<endl;
	//cout<<"newCost: "<<newCost<<endl;	

	do
	{
		oldCost = newCost;
		minCost_tillPivot = min_element(baloon, baloon+c, minByCost);
		maxCost_postPivot = max_element(baloon+c, baloon+n, maxByCost);
		
		minCost_tillPivot->cost += minCost_tillPivot->b;
		maxCost_postPivot->cost -= maxCost_postPivot->b;
		//maxCost_tillPivot = max_element(baloon, baloon+i+1, maxByCost);
		
		/*cout<<"i: "<<i<<endl;
		for(ll j=0;j<n;j++)
			cout<<baloon[j].cost<<" ";
		cout<<endl;
		
		cout<<"oldCost"<<oldCost<<endl;
		cout<<"minCost_tillPivot->cost: "<<minCost_tillPivot->cost<<endl;
		cout<<"maxCost_postPivot->cost: "<<maxCost_postPivot->cost<<endl;
		//cout<<"maxCost_tillPivot->cost: "<<maxCost_tillPivot->cost<<endl;*/
		
		newCost = max_element(baloon, baloon+n, maxByCost)->cost;
		//cout<<"newCost"<<newCost<<endl;
	}
	while(newCost <= oldCost);	
	
	/*if(maxCost->cost <= newCost)
		newCost = maxCost->cost;*/
		
	//maxCost_tillPivot->cost -= maxCost_tillPivot->b;
	//maxCost_postPivot->cost -= maxCost_postPivot->cost;
	//newCost->cost += newCost->b;
	
	//maxCost -> a = 9100000;
	/*for(i=0;i<n;i++)
		cout<<baloon[i].a<<" ";*/

	/*cout<<endl;
	for(i=0;i<n;i++)
		cout<<baloon[i].cost<<" ";*/
		
	//ll ans = max_element(baloon, baloon+n, maxByCost) -> cost;	
	cout<<oldCost;
}
/*
5 16
6 6 5 6 8
2 2 4 4 3
*/
/*
5 19
6 7 5 6 8
2 2 4 4 3
*/

/*
5 3
1 2 3 4 5 
1 2 3 4 5
*/
