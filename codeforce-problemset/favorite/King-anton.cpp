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
typedef long long ll;
#define ld long double

void solve()
{
    ll n;
    cin>>n;
    vl a(n),b(n);
    For(i,n) cin>>a[i];
    For(i,n) cin>>b[i];

    int found[3]={0};
    bool fg = true;
    For(i,n)
    {
        if(b[i]>a[i] && found[2]==0) fg=0;
        if(a[i]>b[i] && found[0]==0) fg=0;
        found[a[i]+1]=1;
    }
    if(fg) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    optimize();
    ll T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
