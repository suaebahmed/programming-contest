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

int binomialCoefficient(int n,int r){
    if(r==0 || n==r) return 1;
    return binomialCoefficient(n-1,r-1)+binomialCoefficient(n-1,r);
}
// memoization DP approach
const int MXN=1000,MXR=800;
int dp[MXN][MXR];
int binomialCoefficientDP(int n,int r){
    if(r==0 || n==r) return 1;
    if(dp[n][r]!=-1) return dp[n][r];
    dp[n][r]=binomialCoefficientDP(n-1,r-1)+binomialCoefficientDP(n-1,r);
    return dp[n][r];
}

void veryFaster(){
	int n,r; cin>>n>>r;
    memset(dp,-1,sizeof(dp));
    cout<<binomialCoefficient(n,r);
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
        veryFaster();
    }
    return 0;
}
