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
    ll n;
    cin>>n;
    vl v(n);
    For(i,n) cin>>v[i];

    sort(v.begin(),v.end());
    ll curr=v[0],ans=1;
    for(int i=1; i<n; i++)
    {
        if(curr<=v[i])
        {
            ans++;
            curr+=v[i];
        }
    }
    cout<<ans<<endl;
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
