#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
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

void solve()
{
    ll n; cin>>n;
    vl v(n); For(i,n) cin>>v[i];

    ll psum[n];
    psum[0]=v[0];
    for(int i=1; i<n; i++)
    {
        psum[i]=v[i]+psum[i-1];
    }

    sort(v.begin(),v.end());
    ll ps[n];
    ps[0]=v[0];
    for(int i=1; i<n; i++)
    {
        ps[i]=v[i]+ps[i-1];
    }

    ll m; cin>>m;
    while(m--)
    {
        ll type,l,r; cin>>type>>l>>r;
        l--;
        r--;
        if(type==1)
        {
            if(l==0) cout<<psum[r]<<endl;
            else cout<<psum[r]-psum[l-1]<<endl;
        }
        else if(type==2)
        {
            if(l==0) cout<<ps[r]<<endl;
            else cout<<ps[r]-ps[l-1]<<endl;
        }
    }
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
