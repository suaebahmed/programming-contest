#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
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
const int mx=2e4+5;

void solve()
{
    int n,m; cin>>n>>m;
    vector<vector<pii>> v(n);
    int cnt=0;

    For(i,n)
    {
        vector<pii> col(m);
        v[i]=col;
        For(j,m)
        {
            int x,y; cin>>x>>y;
            v[i][j]={x,y};
        }
    }
    For(i,n) For(j,m) if(v[i][j].ff || v[i][j].ss) cnt++;
    cout<<cnt<<endl;
}

int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
