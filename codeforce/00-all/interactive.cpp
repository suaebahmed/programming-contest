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
const int N=2*1e5;

bool query(int x){
    cout<<x<<endl;
    string s;
    cin>>s;
    if(s==">=") return 1;
    else return 0;
}

void answer(int x){
    cout<<"! "<<x<<endl;
    exit(0);
}

void solve(){
    int l=0,r=1e6+1;
    while(r>l+1){
        int m=(l+r)/2;
        if(query(m)) l=m;
        else r=m;
    }
    answer(l);
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