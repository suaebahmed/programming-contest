#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
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
typedef long long ll;
#define ld long double
#define mod 1000000007
#define endl '\n'
const int MXN=2*1e3;
#define vb vector<bool>

vector<int> adList[MXN];

void pirntStack(stack<int> st){
    cout<<"\n----------\n";
    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    }
}
// must have & oparetor
void topoLogicalSort(int v,stack<int> &st,vb &vis){
    vis[v]=1;
    for(auto i: adList[v]){
        if(!vis[i]){
        topoLogicalSort(i,st,vis);
        }
    }
    st.push(v);
}
// topological sort using kahn's algo
void topoLogicalSortK(int V){

    vector<int> in_degree(V,0);
    for(int i=0; i<V; i++){
        for(auto x: adList[i]){
            in_degree[x]++;
        }
    }
    queue<int> q;
    for(int i=0; i<V; i++){
        if(in_degree[i]==0) q.push(i);
    }
    int cnt=0;
    vector<int> top_order;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        top_order.pb(u);
        for(auto x: adList[u]){
            if(--in_degree[x]==0) q.pb(x);
        }
        cnt++;
    }
    if(cnt!=V) cout<<"There exists a cycle in the graph";
    else for(auto x: top_order) cout<<x<<" ";
}

void solve(){
    int n,m; cin>>n>>m;

    for(int i=0; i<m; i++){
        int v,u; cin>>v>>u;
        adList[v].pb(u);
    }
    vb vis(n+1);
    stack<int> st;

    for(int i=0; i<=n; i++){
        if(!vis[i]){
         topoLogicalSort(i,st,vis);
         pirntStack(st);
        }
    }
}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tt=1; //cin>>tt;
    for(int i=1; i<=tt; i++){
        //cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}