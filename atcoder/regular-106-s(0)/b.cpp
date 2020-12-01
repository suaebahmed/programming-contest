#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define m_p make_pair
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

ll fastExpo(ll a,ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n&1) res*=a;
        a*=a;
        n>>=1;
    }
    return res;
}

void solve()
{
    ll n;
    cin>>n;
    ll i=1;
    i=sqrt(2*(n+1));
    if(i*i+i>2*(n+1)) i--;
    //while(fastExpo(i,2)+i<=2*(n+1)) i++;
    //i--;
    //deb(i);
    cout<<n-i+1<<endl;
}

int main(){
    optimize();
    int t=1;// cin>>t;
    while(t--) solve();
    return 0;
}
