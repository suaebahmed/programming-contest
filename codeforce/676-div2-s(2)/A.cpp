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
const int mx=2e4+5;

void solve()
{
    int a,b;
    cin>>a>>b;
    vi v;
    int cnt=0;
    int n=a,m=b;
    while(a>0 && b>0)
    {
        if(a&1 && b&1)
        {
            v.pb(cnt);
        }
        cnt++;
        a>>=1;
        b>>=1;
    }
    int x=0;
    for(auto y: v) x+=1<<y;
    cout<<((n^x)+(m^x))<<endl;
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
