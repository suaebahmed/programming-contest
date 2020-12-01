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
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
const int mx=2e5;
int n,ans=0;

void solve()
{
    int n,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    string s; cin>>s;
    int cnt0=0,cnt1=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    if(c0>c1)
    {
        swap(c0,c1);
        swap(cnt0,cnt1);
    }
    ll ans=cnt0*c0;
    if(cnt1*(h+c0)<cnt1*c1) ans+=cnt1*(h+c0);
    else ans+=cnt1*c1;
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
