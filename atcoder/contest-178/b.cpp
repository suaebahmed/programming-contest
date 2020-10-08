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

ll solve(ll a,ll b)
{
    return a*b;
}

int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll max = -1e18; ///my wrong

        if(max < solve(a,c))
            max = solve(a,c);

        if(max < solve(a,d))
           max = solve(a,d);

        if(max < solve(b,c))
            max = solve(b,c);

        if(max < solve(b,d))
            max = solve(b,d);

        cout<<max<<endl;
    }
    return 0;
}
