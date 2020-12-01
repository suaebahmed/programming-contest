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

void solve()
{
    int g,s,b;
    cin>>g>>s>>b;
    int sum=g+s+b;
    //cout<<sum<<endl;

    ld ans=((ld)((100-g)*g)/sum)+((ld)((100-b)*b)/sum)+((ld)((100-s)*s)/sum);
    cout.precision(9);
    cout<<fixed<<ans<<endl;
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
