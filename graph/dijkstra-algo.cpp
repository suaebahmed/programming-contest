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
const int MXN=2*1e5+10;
const ll INF=1e18;
 
vector<pll> adj[MXN]; 
vector<ll> dist;
vector<int> p;
 
 
void dijkstra(int src,int n){
    dist.assign(n+1,INF);
    p.assign(n+1,-1);
 
    priority_queue<pll,vector<pll>,greater<pll>> pq;
    pq.push(make_pair(0,src));
    dist[src]=0;
 
    while(!pq.empty()){
        int u=pq.top().ss;
        ll d_u=pq.top().ff;
        pq.pop();
 
        // cout<<"w: "<<d_u<<" u: "<<u<<" dist: "<<dist[u]<<endl;
        if(d_u!=dist[u]) continue;
        // cout<<"pass\n";
 
        for(auto x: adj[u]){
            int to=x.ff;
            ll w=x.ss;  //weight in adj list
 
            if(w+dist[u]<dist[to]){
                dist[to]=w+dist[u];
                p[to]=u;
                pq.push(make_pair(dist[to],to));
                // cout<<dist[to]<<","<<to<<endl;
            }
        }
    }
}
 
void solve(){
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].pb(make_pair(v,w));
        // adj[v].pb(make_pair(u,w));
    }
    dijkstra(1,n);
    for(int i=1; i<=n; i++) cout<<dist[i]<<' ';
    // cout<<endl;
    // for(int i=1; i<=n; i++){
    //     if(p[i]!=-1) cout<<i<<":-i"<<" "<<p[i]<<"\n";
    // }
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
