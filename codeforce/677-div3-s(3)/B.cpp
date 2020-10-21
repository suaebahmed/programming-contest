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
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007
int mx=-1e5+1;

void solve()
{
    int n; cin>>n;
    vi v(n);
    scanArr(v);
    int l=0,r=n-1;

    while(l<n)
    {
        if(v[l]==1) break;
        else l++;
    }
    while(r>=0)
    {
        if(v[r]==1) break;
        else r--;
    }
    //
    int ans=0;
    for(int i=l; i<=r; i++)
    {
        if(v[i]==0) ans++;
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
