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
vector<int> visited(MXN);

void pirntArr(vi v){
    cout<<"{";
    for(auto x: v) cout<<x<<", ";
    cout<<"}\n";
}

void dfs(int v){
    cout<<v<<' ';
    visited[v]=1;
    for(auto x: adList[v]){
        if(visited[x]==0) dfs(x);
    }
    deb(v);
    return;
}

bool isCycleUn(vb vis,int v,int parent){
    vis[v]=1;
    // deb(v);
    for(auto i: adList[v]){
        if(!vis[i]){
            if(isCycleUn(vis,i,v)) 
                return 1;
        }
        else if(i!=parent){
            // cout<<"p: "<<v<<" "<<i<<endl;
            return 1;
        }
    }
    return 0;
}

void solve(){
    int n,m; cin>>n>>m;

    for(int i=0; i<m; i++){
        int v,u; cin>>v>>u;
        adList[v].pb(u);
        adList[u].pb(v);
    }
    // dfs(1);
    // cout<<"---\n";

    // print adjlist
    for(int i=0; i<=n; i++){
        cout<<"parents "<<i<<": ";
        for(auto x: adList[i]){
            cout<<x<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    // end adj

    vb vis(n+1);

    if(isCycleUn(vis,4,-1)) cout<<"YES\n";
    else cout<<"NO\n";
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
