#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
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
#define endl '\n';

void solve1()
{
	/*
		Time complexity: O((n*n)/2)
		Auxiliary Space: O((n*n)/2)
	*/
	int n,r; cin>>n>>r;
	std::vector<int> v[n+1];
	for(int i=0; i<=n; i++) v[i].pb(1);

	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			int x=v[i-1][j-1]%mod+v[i-1][j]%mod;
			v[i].pb(x%mod);
		}
		v[i].pb(1);
	}
	cout<<v[n][r];
	// for(int i=0; i<=n; i++){
	// 	for(auto x: v[i]) cout<<x<<" ";
	// 		cout<<endl;
	// }
}
void solve2(){
	/*
		Time complexity: O(n*r)
		Auxiliary Space: O(n*r)
	*/
	int n,r; cin>>n>>r;
	int dp[n+1][r+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=min(i,r); j++){
			if(j==0 || j==i) dp[i][j]=1;
			else dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	cout<<dp[n][r];
}
void faster(){
	/*
		Time complexity: O(n*r)
		Auxiliary Space: O(r)
	*/
	int n,r; cin>>n>>r;
	int dp[r+1]={0};
	dp[0]=1; //nC0=1
	for(int i=0; i<=n; i++){
		for(int j=min(i,r); j>0; j--){
			dp[j]=dp[j]+dp[j-1];
		} 
	}
	cout<<dp[r];
}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll T=1;
    //cin>>T;
    while(T--)
    {
        solve2();
    }
    return 0;
}
