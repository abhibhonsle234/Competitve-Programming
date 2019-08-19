#include <bits/stdc++.h>
using namespace std;

struct work
{
    int wage,type;
};
bool activityCompare(struct work s1,struct work s2)
{
    return (s1.wage < s2.wage);
}


int main() {
	// your code goes here
	int n,fl=0,fla=0,ans=0,j=0,k=0,flag=0,flags=0,flagss=0;
	cin>>n;
	struct work coin[n],use[n],full[n];
	for (int i=0;i<n;i++) 
	{
	    cin>>coin[i].wage;
	}
	for (int i=0;i<n;i++) 
	{
	    cin>>coin[i].type;
	    if(coin[i].type==3)
	    {
	    	flags=1;
	        full[j].type=3;
	        full[j].wage=coin[i].wage;
	        j++;
	    }
	    else if(coin[i].type==2)
	    {
	    	flag=1;
	        use[k].type=coin[i].type;
	        use[k].wage=coin[i].wage;
	        k++;
	    }
	    else if(coin[i].type==1)
	    {
	    	flagss=1;
	        use[k].type=coin[i].type;
	        use[k].wage=coin[i].wage;
	        k++;
	    }
	}
	if(flag==0||flagss==0)
	{
		sort(full,full+j,activityCompare);
		ans=full[0].wage;
	}
	else{
	sort(use,use+k,activityCompare);
	for(int i=0;i<k;i++)
	{
	    if(use[i].type==1&&fl==0)
	    {
	        ans+=use[i].wage;
	        //cout<<i<<" 1wala";
	        fl=1;
	        if(fla==1)
	        break;
	    }
	    else if(use[i].type==2&&fla==0)
	    {
	        ans+=use[i].wage;
	        //cout<<i<<" 2wala";
	        fla=1;
	        if(fl==1)
	        break;
	    }
	}
	if(flags==1)
	{
		sort(full,full+j,activityCompare);
		if(ans>full[0].wage)
		ans=full[0].wage;
	}
	}
	cout<<ans<<endl;
	return 0;
}



