#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007

void solve()
{
    int n,k; cin>>n>>k;
    vi v(n);
    For(i,n) cin>>v[i];
    sort(all(v));

    int x=(v[n-1]+v[0])/2;
    int d=v[n-1]-v[0];

    if(k<d && x%2!=0) cout<<-1<<endl;
    else if(k<d && x%2==0) cout<<x<<endl;
    else if(k>d) cout<<v[n-1]+v[0]<<endl;

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
