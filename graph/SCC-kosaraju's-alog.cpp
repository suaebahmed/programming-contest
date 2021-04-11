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
#define lowb(a, x) (lower_bound((a).begin(),(a).end(),(x))-(a).begin())
#define uppb(a, x) (upper_bound((a).begin(),(a).end(),(x))-(a).begin())
typedef long long ll;
#define ld long double
#define endl '\n'
#define mod 1000000007
#define m_p make_pair
const int MXN=1e5+10;
const int INF=INT_MAX;
vector<int> g[MXN],gT[MXN]; //adj
vector<bool> vis(MXN);
vector<int> stack_order,component;
/*
6 8
0 1
1 2
2 3
3 0
2 4
4 5
5 6
6 4
*/
void dfs1(int u){
    vis[u] = 1;
    for(auto v: g[u]){
        if(!vis[v]){
            dfs1(v);
        }
    }
    stack_order.pb(u);
}

void dfs2(int u){
    vis[u] = 1;
    component.pb(u);
    for(auto v: gT[u]){
        if(!vis[v]){
            dfs2(v);
        }
    }
}

void solve(){
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        g[u].pb(v);
        gT[v].pb(u);
    }
    for(int i=0; i<=n; i++){
        if(vis[i]==0){
            dfs1(i);
        }
    }
    // for(auto x: stack_order) cout<<x<<" ";
    for(int i=0; i<=n; i++){
        vis[i] = 0;
    }
    //
    for(int i=0; i<=n; i++){
        int v = stack_order[n-i];
        if(vis[v]==0){
            dfs2(v);
            // printing next component ..
            reverse(all(component));
            for(auto x: component) cout<<x<<" ";
            cout<<endl;
            component.clear();
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
    // scanf("%d",&tt);
    // cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case #"<<i<<":\n";
        solve();
    }
    return 0;
}