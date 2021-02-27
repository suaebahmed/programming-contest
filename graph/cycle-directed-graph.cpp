#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define m_p make_pair
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
#define ar array
const int MXN=1e9;
#define vb vector<bool>
/*
3 5
2 0
2 3
0 1
1 2
3 3

it has 3 loop
*/
bool isCyclic(int v,vb &vis,vb &c_stk,vi adj[]){
    vis[v]=1;
    c_stk[v]=1;
    // deb(v);// loop nodes
    for(auto i: adj[v]){
        if(!vis[i] && isCyclic(i,vis,c_stk,adj)){
            // cout<<"ahmed: \n";
            return 1;
        }
        else if(c_stk[i]){
            // cout<<"suaeb: \n";
            // if the cycle exits then 
            // this statement return true:
            return 1;
        }
    }
    c_stk[v]=0;
    return 0;
}

void solve(){
    int n,m; cin>>n>>m;
    vector<int> adj[n+1];

    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);  //   directed graph
    }
    vb vis(n+1),c_stk(n+1);

    // print adj list
    for(int i=0; i<=n; i++){
        cout<<i<<"-> ";
        for(auto x: adj[i]){
            cout<<x<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    // end print

    if(isCyclic(2,vis,c_stk,adj)) cout<<"YES\n";
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