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
const int MXN=2*1e5;
/*
    khan academy:
    cryptography modular arith
    gcd(A,B) => gcd(B,A-B);
*/
int my_gcd(int a,int b){
    if(a>b) swap(a,b);
    // cout<<a<<"=>"<<b<<endl;
    return a<=0?b:my_gcd(a,b-a);
}

void solve(){
    int n; cin>>n;
    int a[MXN];
    for(int i=0; i<n; i++) cin>>a[i];

    //using euclidean algo
    int ans=a[0];
    for(int i=1; i<n; i++){
        ans=__gcd(ans,a[i]);
    }
    cout<<ans<<endl;
    
    //using subtracting
    cout<<my_gcd(a[0],a[1])<<endl;
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