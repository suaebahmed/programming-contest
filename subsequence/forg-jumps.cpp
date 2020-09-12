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
#define vi vector<int>
#define pb push_back
typedef long long ll;


int main(){
    optimize();
    ll T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        vector<int> v;

        v.pb(0);
        FOR(i,0,n-1) if(s[i]=='R') v.pb(i+1);
        v.pb(n+1);
        ll ans = 0;
        for(int i=0; i<v.size()-1; i++)
        {
            ll x =v[i+1]-v[i];
            ans = max(ans,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}
