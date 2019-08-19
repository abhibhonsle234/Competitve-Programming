#include<bits/stdc++.h>
using namespace std;
/*bool cmp(struct task a, struct task b)
{
    return a.sc < b.sc;
}*/
/*bool rcmp(struct task a, struct task b)
{
    return a.sc > b.sc;
}*/
int main()
{
	long p,w;
	long i, s, j=0;
	// input no. of problems and subtasks
	cin>>p>>s;
	w = p;
	// declare array for difficulty of each subtask and index of that subtask
	pair<int,int> args[p];
	// declare array for each subtask
	pair<int,int> subTask[s];
	// till all ps
	while(p--)
	{	
		// enter subtask score
		for(int i = 0; i < s; i++)
		{	
			cin>>subTask[i].first;
		}
		// enter no. of solvers of subtask
		for(int i = 0; i < s; i++)
		{
			cin>>subTask[i].second;
		}
		// sort according to score in increasing order
		sort(subTask, subTask+s);
		/*for(int i = 0; i < s; i++)
		{	
			cout<<subTask[i].sc<<" ";
		}
		cout<<endl;
		for(int i = 0; i < s; i++)
		{
			cout<<subTask[i].ns<<" ";
		}	
		cout<<endl;*/
		// intialise count for difficulty
		args[j].first = 0;
		// set index for subtask
		args[j].second = j+1;
		//count difficulty according to count of ns[i] > ns[i+1]
		for(i = 0; i < s-1; i++)
		{
			if(subTask[i].second > subTask[i+1].second)
				args[j].first++;
		}
		//cout<<args[j].sc<<endl;
		j++;
	}
	// sort accoriding to increasing order of difficulty
	sort(args, args+w);
	/*for(int i = 0; i < w; i++)
	{	
		cout<<args[i].sc<<" ";
	}
	cout<<endl;*/
	//cout<<"w: "<<w<<endl;
	for(i = 0; i < w; i++)
	{	
		cout<<args[i].second<<"\n";
	}
	/*
	struct task ans[w];
	for(int i=0;i<w;i++)
	{
		ans[i].sc = args[i].ns;
		ans[i].ns = i+1;
	}
	sort(ans, ans+w, cmp);
	for(int i = 0; i < w; i++)
	{
		cout<<ans[i].ns<<"\n";
	}	
	//cout<<endl;*/
	return 0;		
}
