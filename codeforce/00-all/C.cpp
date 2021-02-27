#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(int i=0; i<int(n); ++i)
#define read(v) for (auto &it : v) cin >> it;
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
#define lowb(a, x) (lower_bound((a).begin(),(a).end(),(x))-(a).begin())
#define uppb(a, x) (upper_bound((a).begin(),(a).end(),(x))-(a).begin())
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
#define ar array
#define PI acos(-1)
const int MXN=1e6+10;

struct myComp{
    bool operator()(const pll &v,const ll &key){
        return (v.first<key);
    }
    bool operator()(const ll &key,const pll &v){
        return (v.first>key);
    }
};

void solve(){
    ll n,m; cin>>n>>m;
    vector<pll> p_sum;

    ll sumAll=0;
    for(int i=0; i<n; i++){
        ll x; cin>>x;
        sumAll+=x;
        if(p_sum.empty() || sumAll>p_sum.back().ff){
            p_sum.pb(make_pair(sumAll,i));
        }
    }

    for(int i=0; i<m; i++){
        int x; cin>>x;
        // infinite
        if(p_sum.back().ff<x && sumAll<=0){
            cout<<-1<<" ";
            continue;
        }
        int round=0; //loops
        if(p_sum.back().ff<x){
            round=(x-p_sum.back().ff+sumAll-1)/sumAll;
            // deb((x-1));
            cout<<"Debug: "<<p_sum.back().ff<<" "<<sumAll<<endl;
        }
        x-=round*sumAll;
        auto it=lower_bound(all(p_sum),x,myComp())-p_sum.begin();
        cout<<round*n+p_sum[it].ss<<" ";
    }
    cout<<endl;

}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tt=1; 
    cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}