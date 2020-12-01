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

void solve()
{
     int n; cin>>n;
     vector<int> v(n);
     ll sum=0;
     int mx=0;
     for(int i=0; i<n; i++)
     {
         cin>>v[i];
         sum+=v[i];
         mx=max(mx,v[i]);
     }
     ll k=(sum+n-2)/(n-1);
     cout<<max(k,1ll*mx)*(n-1)-sum<<endl;
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
