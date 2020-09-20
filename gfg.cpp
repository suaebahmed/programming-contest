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

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b))*b;
}

int main(){
    optimize();
    ll T=1;
    cin>>T;
    while(T--)
    {
        ll l,r;
        cin>>l>>r;
        ll mx = INT_MAX;

        ll a,b,x;
        for(ll i=l; i<r; i++)
        {
            if(i != r-i) x = lcm(i,r-i);
            if(mx > x)
            {
                mx = x;
                a = i;
                b = r-i;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
