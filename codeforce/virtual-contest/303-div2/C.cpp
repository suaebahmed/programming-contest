#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define s(n) scanf("%lld",&n) ;
ll n,x[100003],h[100003];
map<pair<ll,ll>,ll>maap;
map<pair<ll,ll>,ll>::iterator it;
ll ans(ll last,ll i)
{
    ll w1=-1e10,w2=-1e10,w3=-1e10;
    pair<ll,ll>p1;
    p1.first=last;
    p1.second=i;
    it = maap.find(p1);
    if (it != maap.end())
        {
            return 0;
        }

    if(i>=n){return 0;}
    if(last<x[i]-h[i])
    {
        w1=1+ans(x[i],i+1);
    }
    if(x[i]+h[i]<x[i+1])
    {
        w2=1+ans(x[i]+h[i],i+1);
    }
    w3=ans(x[i],i+1);

    maap[p1]=max(w1,max(w2,w3));
    return max(w1,max(w2,w3));

}
main()
{
    ll i,j;
    s(n);

    for(i=0;i<n;i++)
    {
        s(x[i]);
        s(h[i]);
    }
    x[n]=1e18;
    //ll sum=x[i][0];
    ll sum=ans(-10000000000000000,0);
    printf("%lld",sum);
}
