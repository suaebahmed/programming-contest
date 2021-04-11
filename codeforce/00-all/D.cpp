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
ll seg[4*MAXN],lazy[4*MAXN];

void build(int x,int lx,int rx){
    if(lx==rx){
        seg[x]=a[lx];
        return;
    }
    int mid=(lx+rx)/2;
    build(2*x+1,lx,mid);
    build(2*x+2,mid+1,rx);
    seg[x]=seg[2*x+1]+seg[2*x+2];
}

void push(int v){
    // if(lazy[v]){}
    seg[2*v] += lazy[v];
    seg[2*v+1] += lazy[v];
 
    lazy[2*v] += lazy[v];
    lazy[2*v+1] += lazy[v];
    lazy[v]=0;
}

ll query(int x,int lx,int rx,int l,int r){
    if(l>r) return 0;
    if(l==lx && r==rx){
        return seg[x];
    }
    push(x);
    int mid=(lx+rx)/2;
    ll left=query(2*x+1,lx,mid,l,min(r,mid));
    ll right=query(2*x+2,mid+1,rx,max(l,mid+1),r);
    return left+right;
}

void update(int x,int lx,int rx,int l,int r,ll addend){
    if(l>r) return;
    if(l==lx && r==rx){
        seg[x] += addend;
        lazy[x] += addend;
        deb(seg[x]);
        return;
    }
    push(x);
    int mid=(lx+rx)/2;
    update(2*x,lx,mid,l,min(r,mid),addend);
    update(2*x+1,mid+1,rx,max(l,mid+1),r,addend);
}

void solve(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(0,0,n-1);

    for(int i=0; i<=9; i++) cout<<seg[i]<<' ';
    cout<<endl;

    int q; cin>>q;
    while(q--){
        int type; cin>>type;
        if(type==2){
            int l,r; cin>>l>>r;
            ll x; cin>>x;
            update(0,0,n-1,l-1,r-1,x);
        }
        else{
            int l,r; cin>>l>>r;            
            cout<<query(0,0,n-1,l-1,r-1)<<"\n";
        }
    }


    for(int i=0; i<=9; i++) cout<<seg[i]<<' ';
    cout<<endl;
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