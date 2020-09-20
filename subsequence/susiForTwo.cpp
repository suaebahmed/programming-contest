#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<n; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
const ll mx = 1e6+1;
ll a[mx];
/*
7
2 2 2 1 1 2 2
14
1 1 1 1 1 2 2 1 1 1 2 2 2 2
*/
void solve()
{
    ll n;
    cin>>n;
    For(i,n) cin>>a[i];
    //a[n]=-1;
    vi v;
    int count=1,ans=0;
    for(int i=0; i<=n; i++)
    {
        if(a[i]==1)
        {
            count++;
        }
        else
        {
            v.pb(count);
            count=1;
        }
    }
    for(int i=0; i<v.size()-1; i++)
    {
        ans=max(ans,min(v[i],v[i+1]));
    }
    cout<<2*ans<<endl;
}

int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
