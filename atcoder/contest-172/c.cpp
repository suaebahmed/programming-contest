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

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vl a(n+m);
    For(i,n+m) cin>>a[i];
    int ans=0;
    sort(a.begin(),a.end());
    for(int i=0; i<n+m; i++){
        if(k>=a[i]){
            k-= a[i];
            ans++;
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
