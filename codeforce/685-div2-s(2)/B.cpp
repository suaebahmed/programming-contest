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
const ll MX=1e18;
int n,ans=0;

void solve()
{
    int q; cin>>n>>q;
    string s; cin>>s;
    vector<pii> v(q);
    for(int i=0; i<q; i++)
    {
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    for(int j=0; j<q; j++)
    {
        bool ok=0;
        for(int i=v[j].ss; i<n; i++)
        {
            if(s[i]==s[v[j].ss-1]) ok=1;
        }
        //front
        for(int i=v[j].ff-2; i>=0; i--)
        {
            if(s[i]==s[v[j].ff-1]) ok=1;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    optimize();
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
