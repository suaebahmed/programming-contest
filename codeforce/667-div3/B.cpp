#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;

ll s(ll a,ll b,ll x,ll y,ll n)
{
    /// decrease the value of b
    ll delta = min(b-y,n);
    b -= delta;
    n -= delta;
    /// decrease the value of a
    delta = min(n,a-x);
    a -= delta;
    return a*b;
}

int main(){
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll ans=min(s(a,b,x,y,n),s(b,a,y,x,n));
        cout<<ans<<endl;
    }
    return 0;
}
