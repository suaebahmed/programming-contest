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
//#define mod 1000000007

ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);
}

ll reduceNum(string a,ll b)
{
    ll mod=0;
    for(int i=0; i<a.length(); i++)
    {
        mod = (mod*10+a[i]-'0')%b;
    }
    return mod%b;
}

void solve()
{
    string a; cin>>a; /// a>b
    ll b; cin>>b;
    ll num=reduceNum(a,b);
    cout<<gcd(num,b)<<endl;
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
