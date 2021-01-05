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
const int MXN=1000;

void solve(){
    int n; cin>>n;
    vector<int> v(n),fact(MXN,0);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++){
        int cpy=v[i];
        for(int j=2; j*j<=cpy; j++){
                if(cpy%j==0){
                    int cnt=0;
                    while(cpy%j==0){
                        cnt++;
                        cpy/=j;
                    }
                    fact[j]=max(cnt,fact[j]);
                }
            }
        if(cpy>1) fact[cpy]=max(1,fact[cpy]);
    }
    
    int ans=1;
    int mx=*max_element(all(v));
    for(int i=1; i<=mx; i++){
        for(int j=1; j<=fact[i]; j++) ans*=i;
    }
    cout<<"lcm: "<<ans<<endl;
}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tt=1; //cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}