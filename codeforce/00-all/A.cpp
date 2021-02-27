#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define read(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(s) s.size()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb emplace_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define lowb(a, x) (lower_bound((a).begin(),(a).end(),(x))-(a).begin())
#define uppb(a, x) (upper_bound((a).begin(),(a).end(),(x))-(a).begin())
typedef long long ll;
#define ld long double
#define mod 1000000007
const int MXN=1e5+10;
const ll INF=1e18;

struct coprime{
    vector<ll> s,v={0}; //store gcd in v
    void push(ll x){
        s.pb(x);
        v.pb(__gcd(v.back(),x));
    }
    ll pop(){
        ll res=s.back();
        s.pop_back();
        v.pop_back();
        return res;
    }
    ll gcd(){ return v.back(); }
    bool empty(){ return s.empty(); }
}s1,s2;

void add(ll x){
    s2.push(x);
}
void remove(){
    if(s1.empty()){
        while(!s2.empty()){
            s1.push(s2.pop());
        }
    }
    s1.pop();
}
bool good(){
    ll g1=s1.gcd();
    ll g2=s2.gcd();
    return __gcd(g1,g2)==1;
}
void solve(){
    int n; cin>>n;
    vector<ll> v(n);
    read(v);
    int mn=1e9;
    for(int r=0,l=0; r<n; r++){
        add(v[r]);
        while(good()){
            remove();
            mn=min(mn,r-l+1);
            l++;
        }
    }
    cout<<(mn==1e9?-1:mn);
}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tt=1;
    // scanf("%d",&tt);cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}