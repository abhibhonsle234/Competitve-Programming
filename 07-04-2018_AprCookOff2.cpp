#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--)
	{
	   long long n,w,wt=0,count=0;
	   cin>>n>>w;
	   int d2=0,d1=0;
	   long long max=pow(10,n);
	   n=pow(10,n-1);
	   cout<<n<<" "<<max<<endl;
	   for(long j=n;j<max;j++)
	   {
	   //std::string str = std::to_string(j);
	   long k=j;
	   d1=k%10;
	   //cout<<"before loop\n";
	    while(k>0)
	    {
	    	//cout<<"in loop\n";
	       k=k/10;
	       d2=k%10;
	       wt+=d2-d1;
	       d1=d2;
	    }
	    /* 10 = 0-1=-1 
		*/
		cout<<"wt "<<j<<"= "<<wt<<endl;
	        if(wt==w)
	        count++;
	   }
	   cout<<count<<endl;
	}
	return 0;
}

