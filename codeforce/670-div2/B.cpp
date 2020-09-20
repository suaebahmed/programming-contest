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
#define vl vector<ll>
#define pb push_back
#define MOD 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    vl v(n);
    FOR(i,0,n-1) cin>>v[i];
    sort(v.begin(),v.end());

    ll mx = -1e18;
    for(int i=0; i<5; i++)
    {
        ll i1 = (n-1+i)%n;
        ll i2 = (n-2+i)%n;
        ll i3 = (n-3+i)%n;
        ll i4 = (n-4+i)%n;
        ll i5 = (n-5+i)%n;
        ll value = v[i1]*v[i2]*v[i3]*v[i4]*v[i5];
        cout<<"value: "<<value<<endl;
        mx = max(mx,value);
    }
    cout<<mx<<endl;
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
