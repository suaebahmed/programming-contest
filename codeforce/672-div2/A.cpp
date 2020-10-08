#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double

void solve()
{
    ll n; cin>>n;
    vl v(n);
    For(i,n) cin>>v[i];

    for(int i=1; i<n; i++)
    {
        if(v[i-1]>v[i]) continue;
        else
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl; //3 2 1
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
