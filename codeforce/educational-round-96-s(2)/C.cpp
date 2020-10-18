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
    int n; cin>>n;
    vector<pii> v;
    int lastValue=0,prev=n;
    for(int i=n-1; i>=1; i--)
    {
        v.pb({prev,i});
        prev=(i+prev+1)/2;
    }
    cout<<prev<<endl;
    for(auto &x: v) cout<<x.ff<<" "<<x.ss<<endl;
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
