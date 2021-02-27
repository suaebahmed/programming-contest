#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define read(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
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
#define mod 1000000007
#define endl '\n';
#define PI acos(-1)
const int MXN=1e6+10;

ll fastExpo(ll a,ll b,ll md){
    ll res=1;
    while(b>0){
        if(b&1) res=(res*a)%md;
        a=(a*a)%md;
        b>>=1;
    }
    return res;
}

int modInverse(ll n,int md){
    return fastExpo(n,md-2,md);
}

int nCrModPfermat(ll n,int r,int md){
    if(n<r) return 0;
    if(r==0) return 1;
    ll *fact=new ll[n+1];
    fact[0]=1;
    for(ll i=1; i<=n; i++){
        fact[i]=(fact[i-1]*i)%md;
    }
    ll a=fact[n];
    ll b=(fact[r]%md*fact[n-r]%md)%md;
    return (a%md*modInverse(b,md)%md)%md;
}

/*
    Remember, Hope is a good thing... 
    May be the best of things... 
    and No Good thing ever Dies !!!
*/

void solve(){
	ll n,k; cin>>n>>k;
    vector<ll> a(n);
    read(a);
    sort(rall(a));
    map<ll,ll> c1,c2;
    for(int i=0; i<k; i++) ++c1[a[i]];
    for(int i=0; i<n; i++) ++c2[a[i]];

    cout<<c2[a[k-1]]<<" "<<c1[a[k-1]]<<"\n";
    // cout<<nCrModPfermat(c2[a[k-1]],c1[a[k-1]],mod)<<endl;
}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tt=1; //cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
