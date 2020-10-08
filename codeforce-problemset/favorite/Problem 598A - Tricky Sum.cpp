#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll power(ll b,ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n%2==0) b*=b,n/=2;
        else res*=b,n--;
    }
    return res;
}
void solve()
{
    ll n; cin>>n;
    ll sum=0,ii=1;
    for(int i=1; ii<=n; i++)
    {
        sum += ii;
        ii=power(2,i);//check first ii<=n, then assign to sum var;
    }
    n = (n*(n+1))/2;
    cout<<n-(2*sum)<<endl;
}
// -- above my solution --
// -- below other solution --
int main()
{
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a;
        ll pow2=1,b=(a*(a+1))/2;
        while(pow2<=a)
        {
            b-=pow2*2;
            pow2*=2;
            cout<<pow2<<" ";
        }
        cout<<b<<endl;
    }
}
