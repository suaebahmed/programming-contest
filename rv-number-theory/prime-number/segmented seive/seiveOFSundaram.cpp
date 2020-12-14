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
const int MXN=1e6;
vector<int> prime;

void seiveOfSundaram(){
	int newN=(MXN-1)/2;
	bool marked[newN+1];
	memset(marked,false,sizeof(marked));

	for(int i=1; i<=newN; i++){
		for(int j=i; (i+j+2*i*j)<=newN; j++){
			marked[i+j+2*i*j]=true;
		}
	}
	prime.pb(2);
	for (int i = 1; i <=newN; ++i)
	{
		if(marked[i]==false){
			prime.pb(i*2+1);
		}
	}
}

void solve()
{
	seiveOfSundaram();
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<prime[i]<<" ";
	}
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
        solve();
    }
    return 0;
}
