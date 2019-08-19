#include<bits/stdc++.h>
using namespace std;
class DivisorInc
{
    public:
    int countOperations(int N, int M)
    {
        if(N == M) return 0;
        int visited[200001];// = { 999999 };
        for(int i=0; i < 100001;++i) { visited[i] = 999999; }

        visited[N] = 0;
        for(int k=N; k <=(M);++k)
        {
            for(int i=2; i <= (sqrt(k)+1) ;++i)
            {
                cout<<"k: "<<k<<"i: "<<i<<"\n";
                if(k%i == 0)
                {
                    int t = k/i;
                    if(k+i <=M)
                    {
                        visited[k+i] = min(visited[k]+1, visited[k+i]);
                    }
                    if(k+t <= M)
                        visited[k+t] = min(visited[k]+1, visited[k+t]);
                }
            }
        }
        if(visited[M]==999999) return -1;
        return visited[M];
    }
};
int main()
{
    int n, m;
    cin>>n>>m;
    DivisorInc ob;
    cout<<ob.countOperations(n, m);

    return 0;
}
