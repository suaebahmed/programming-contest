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
const int MXN=1005;

ll fastExpo(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b&1) res=(res*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}
ll *fact=new ll[MXN];

void factorial(){
	fact[0]=1;
	for(ll i=1; i<MXN; i++){
		fact[i]=(fact[i-1]%mod*i%mod)%mod;
	}
}

void solve(){
	factorial();
	ll n,r; cin>>n>>r;
	//fact[n]/(fact[r]*fact[n-r]);
	ll a=fact[n];
	ll b=(fact[r]%mod*fact[n-r]%mod)%mod;
	b=fastExpo(b,mod-2); //mod inverse
	cout<<(a%mod*b%mod)%mod<<endl;

}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
        // solve1();
    }
    return 0;
}