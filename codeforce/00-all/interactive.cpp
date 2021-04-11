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
#define m_p make_pair
const int N=2*1e5;

bool query(){
    cout<<"NO"<<endl;
    return 0;
}

void answer(int x){
    cout<<"! "<<x<<endl;
    exit(0);
}

void solve(){
    int n; cin>>n;
    vector<pii> c0,c1;
    vector<vi> grid(n,vi(n));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i+j)%2==0) c0.pb(m_p(i,j));
            else c1.pb(m_p(i,j));
        }
    }
    while(c0.size() && c1.size()){
        int x; cin>>x;
        if(x==1){
            pii y = c1.back();
            c1.pop_back();
            cout<<2<<" "<<y.ff<<" "<<y.ss<<endl;

            grid[y.ff-1][y.ss-1]=2;

        } 
        else { // x = 2 or x = 3
            pii y = c0.back();
            c0.pop_back();
            cout<<1<<" "<<y.ff<<" "<<y.ss<<endl;

            grid[y.ff-1][y.ss-1]=1;

        }
    }
    //fill the remaining empty cell
    while(c0.size()){
        int x; cin>>x;
        pii y = c0.back();
        c0.pop_back();
        int targ = 1;
        if(x == 1) targ=3;
        cout<<targ<<" "<<y.ff<<" "<<y.ss<<endl;

        grid[y.ff-1][y.ss-1]=targ;

    }
    while(c1.size()){
        int x; cin>>x;
        pii y = c1.back();
        c1.pop_back();
        int targ = 2;
        if(x == 2) targ=3;
        cout<<targ<<" "<<y.ff<<" "<<y.ss<<endl;

        grid[y.ff-1][y.ss-1]=targ;
    }
    for(auto x: grid){
        for(int i: x) cout<<i<<" ";
        cout<<endl;
    }
}

int main(){
    optimize();
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int tt=1;//cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}