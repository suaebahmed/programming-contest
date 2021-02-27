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
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define lxb(a, x) (lxer_bound((a).begin(),(a).end(),(x))-(a).begin())
#define uppb(a, x) (upper_bound((a).begin(),(a).end(),(x))-(a).begin())
typedef long long ll;
#define ld long double
#define mod 1000000007
#define endl '\n'
const int MAXN=1e5+10;
ll a[MAXN];
pair<long long,long long> seg[4*MAXN];

pll combine(pll a, pll b) {
    if (a.first > b.first) 
        return b;
    if (b.first > a.first)
        return a;
    return make_pair(a.first, a.second + b.second);
}

void build(int x,int lx,int rx){
    if(lx==rx){
        seg[x]=make_pair(a[lx],1);
        return;
    }
    int mid=(lx+rx)/2;
    build(2*x+1,lx,mid);
    build(2*x+2,mid+1,rx);
    seg[x]=combine(seg[2*x+1],seg[2*x+2]);
}

pll query(int x,int lx,int rx,int l,int r){
    if(lx>=l && rx<=r) return seg[x];
    if(rx<l || lx>r) 
        return make_pair(INT_MAX,0);

    int mid=(lx+rx)/2;
    pll left=query(2*x+1,lx,mid,l,r);
    pll right=query(2*x+2,mid+1,rx,l,r);
    return combine(left,right);
}

void update(int x,int lx,int rx,int idx,ll v){
    if(lx==rx){
        if(lx!=idx) return;
        seg[x].ff=v;
        return;
    }
    if(idx<lx || rx<idx) return;
    int mid=(lx+rx)/2;
    update(2*x+1,lx,mid,idx,v);
    update(2*x+2,mid+1,rx,idx,v);
    seg[x]=combine(seg[2*x+1],seg[2*x+2]);
}

void solve(){
    int n,q; cin>>n>>q;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(0,0,n-1);
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int idx; ll v;
            cin>>idx>>v;
            update(0,0,n-1,idx,v);
        }
        else{
            int l,r; cin>>l>>r;
            pll p=query(0,0,n-1,l,r-1);
            cout<<p.ff<<" "<<p.ss<<endl;
        }
    }
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
        // cout<<"Case "<<i<<":\n";
        solve();
    }
    return 0;
}