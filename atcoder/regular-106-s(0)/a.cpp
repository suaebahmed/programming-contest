#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(ll i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
typedef long long ll;
string alph("abcdefghijklmnopqrstuvwxyz"),s,t;
ll n, cnt, ans, a, b, c, tmp, m, x, y, sum, k;

void solve()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    ans=x;
    if(a>b)
    {
        for(int i=b; i<a-1; i++) ans+=min(2*x,y);
    }
    else
    {
        for(int i=a; i<b; i++) ans+=min(2*x,y);
    }
    cout<<ans<<endl;
}

int main(){
    optimize();
    int t=1;// cin>>t;
    while(t--) solve();
    return 0;
}

