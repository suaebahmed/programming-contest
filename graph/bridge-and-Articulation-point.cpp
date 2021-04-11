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
#define endl '\n'
#define mod 1000000007
const int MXN=5*1e3+10;
const int INF=INT_MAX;

vector<int> adj[MXN];
int disc[MXN],low[MXN],parent[MXN];

// find all bridge
void dfs_bridge(int u,vector<bool> &vis){
    static int time = 0; //like a global variable
    vis[u] = 1;
    disc[u] = low[u] = ++time;

    for(auto v: adj[u]){
        if(!vis[v]){
            parent[v] = u; // u is parent of v
            dfs_bridge(v, vis);

            low[u] = min(low[u], low[v]);
            if(low[v] > disc[u]){
                cout<< u <<" == "<< v <<"\n";
            }
        }
        else if(v != parent[u]){
            low[u] = min(low[u], disc[v]);
        }
    }
}

// find all articulation point
void dfs_AP(int u,vector<bool> &vis){
    static int time = 0; //like a global variable
    vis[u] = 1;
    disc[u] = low[u] = ++time;
    int child=0;

    for(auto v: adj[u]){
        if(!vis[v]){
            
            child++;
            parent[v] = u; // u is parent of v
            dfs_AP(v, vis);
            low[u] = min(low[u], low[v]);
            //(1) u is root of DFS tree that has atleast 2 child
                       // wrong condition
            if(parent[u] ==-1 && child>1){
                cout<<" || "<< u <<" || "<<"\n";
            }
            //(2) no root in DFS tree
            if(parent[u] !=-1 && low[v] >= disc[u]){
                cout<<" | "<< u <<" | "<<"\n";
            }
        }
        else if(v != parent[u]){
            low[u] = min(low[u], disc[v]);
        }
    }
}

void solve(){
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(int i=1; i<=n; i++) parent[i]=-1;

    vector<bool> vis(n+5);
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            dfs_AP(i,vis);
        }
    }
    // for(int i=0; i<=n; i++){
    //     cout<<disc[i]<<" "<<low[i]<<"\n";
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