#include<iostream>
#define ll long long
using namespace std;
ll highestFactor(ll m)
{
    cout<<"m: in: "<<m<<endl;
    ll i;

    for(i=m/2;m>0;i--)
    {
        if(m%i==0)
          return i;
    }

}
ll gcd(ll n, ll m)
{

    if(n<m)
    {
        n = n-m;
        m = n+m;
        n = m-n;
    }
    ll a=n, b=m;
    while(n!=0)
    {
        n%=m;
        if(n!=0)
        {
            n = n-m;
            m = n+m;
            n = m-n;
        }

    }
    if(b!=m)
    {
        cout<<"m: "<<m<<endl;
        return m;
    }
    else
    {
        cout<<"m: "<<m<<endl;
        return highestFactor(m);
    }
    /*if(n == 0)
        return m;
    return gcd(n, m%n);*/
}
int main()
{
    ll n, m;
    cin>>n>>m;
    ll add, counts=0, flag=0;
    if(n==m)
        flag = 1;
    while(n!=m)
    {
        cout<<"n: "<<n<<" m: "<<m<<endl;
        add = gcd(n, m);
        if(add == 1 or flag==1)
        {
            cout<<-1<<endl;
            break;
        }
        n+=add;
        counts++;
    }
    if(add!=1 and flag==0)
        cout<<counts<<endl;
    //cout<<"GCD: of "<<m<<" and "<<n<<" is "<<gcd(n, m);
}
