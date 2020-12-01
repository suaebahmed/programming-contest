#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define mp make_pair
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007
const ll mx=-1e18;
ll n, cnt, ans, a, b, c, tmp, m, x, y, sum, k;
/*

// no middle
2+5=7/2=3
must have (n+m)%2!=0 for i=3
3 6
1 0 1 0 1 0
0 1 0 1 0 0
0 1 1 1 1 0

// has middle
2+4=6/2=3
must have i!=k for i=0,1,2
3 5
1 0 1 0 0
1 1 1 1 0
0 0 1 0 0
*/

void solve()
{
    cin>>n>>m;
    vector<vi> v(n,vi(m));
    int zero[n+m-1],one[n+m-1];
    memset(zero,0,sizeof(zero));
    memset(one,0,sizeof(one));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
            if(!v[i][j]) zero[i+j]++;
            else one[i+j]++;
        }
    }
    int k=(n+m-2)/2;//(n-1+m-1)/2
    ans=0;
    for(int i=0; i<=k; i++)
    {
        if(i!=k || (n+m)%2!=0)
        {
            x=zero[i]+zero[n+m-2-i];
            y=one[i]+one[n+m-2-i];
            ans+=min(x,y);
        }
    }
    cout<<ans<<endl;
}

int main(){
    optimize();
    ll T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
