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
vector<int> adj[MXN];
vector<bool> vis(MXN),callStack(MXN);
vector<int> low(MXN),disc(MXN);
stack<int> st;
int scc = 0;

void dfs(int u){
    vis[u] = 1;
    static int time = 0;
    low[u] = disc[u] = ++time;
    callStack[u] = 1;
    st.push(u);

    for(auto v: adj[u]){
        if(!vis[v]){
            dfs(v);
            if(callStack[u]==true)
            low[u] = min(low[u],low[v]);

        }
        else if(vis[v] && callStack[v]==true){
            low[u] = min(low[u],disc[v]);
        }
    }

    if(low[u] == disc[u]){
        cout<<"SCC # "<<++scc<<"\n";
        while(1){
            int n = st.top();
            st.pop();
            cout<<n<<" ";
            callStack[n] = 0;
            if(n==u) break;
        }
        cout<<endl;
    }
}
/*
8 12
1 2
2 3
3 1
2 8
3 4
8 4
4 8
7 8
5 4
5 7
7 6
6 5
*/

void solve(){
    int n,m; cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
    }
    for(int i=1; i<=n; i++){
        if(vis[i]==0){
           dfs(i);
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