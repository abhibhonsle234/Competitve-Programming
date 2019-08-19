#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool sortByMul(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second*a.first > b.second*b.first); 
} 
void getmaxCostIndices(ll cost[], ll maxCostIndices[], ll maxCost)
{
	long i = 0;
	for(i=0;i<100;i++)
	{
		if(maxCost);
	}
}
int main()
{
	ll n, m, i, j;
	cin>>n>>m;
	pair<ll, ll>baloon[n];
	ll cost[n];
	for(i=0;i<n;i++)
		cin>>baloon[i].first;
	for(i=0;i<n;i++)
	{
		cin>>baloon[i].second;
		cost[i] = baloon[i].first*baloon[i].second;		
	}	
	sort(baloon, baloon+n, sortByMul);
	ll* maxCost = max_element(cost, cost+n);
	cout<<*maxCost;
	ll maxCost_new = 0;
	ll maxCostCount[n];
	i = 0;
	while(m>0)
	{
		if(baloon[i].first > 0)
		{
			baloon[i].first -= 1;
			cost[i]-=baloon[i].second;
			m-=1;
		}
		else
		{
			i++;
		}
	}
	for(i=0;i<n;i++)
		cout<<cost[i]<<" ";
	/*while(*maxCost > maxCost_new)
	{	
		maxCost = maxCost_new;
		cost[0] -= baloon[i].second;
		getMaxCostCount(maxCostCount, maxCost);
	}*/	
}
