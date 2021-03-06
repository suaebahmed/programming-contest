#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define printArr(v) for(auto x: v) cout<<x<<" ";
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
const ll mx=2e5+2;
int n;

void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int al[26]={0};
    for(int i=0; i<k; i++)
    {
        char ch; cin>>ch;
        al[(int)ch-'a']=1;
    }
    vector<ll> v;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        int x=(int)s[i]-'a';
        if(al[x]==1) cnt++;
        else if(cnt!=0)
        {
            v.pb(cnt);
            cnt=0;
        }
    }
    v.pb(cnt);
    ll ans=0;
    for(auto x: v)
    {
        ans+=(x*(x+1))/2;
    }
    cout<<ans;
}

int main(){
    optimize();
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
