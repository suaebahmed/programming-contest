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
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007
int mx=-1e5+1;

void solve()
{
    int n;
    cin>>n;
    char a[205][205];
    For(i,n)
    {
        For(j,n)
        {
            cin>>a[i][j];
        }
    }
    vector<pii> v;
    if(a[0][1]==a[1][0])
    {
        if(a[n-1][n-2]==a[0][1]) v.pb({n,n-1});
        if(a[n-2][n-1]==a[0][1]) v.pb({n-1,n});
        cout<<v.size()<<endl;
        for(auto x: v) cout<<x.ff<<" "<<x.ss<<endl;
    }
    else
    {
        if(a[n-2][n-1]==a[0][1] && a[n-1][n-2]==a[0][1])
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
            return;
        }
        else if(a[n-2][n-1]==a[1][0] && a[n-1][n-2]==a[1][0])
        {
            cout<<1<<endl;
            cout<<2<<" "<<1<<endl;
            return;
        }
        cout<<2<<endl;
        cout<<1<<" "<<2<<endl;
        if(a[n-2][n-1]!=a[0][1]) cout<<n-1<<" "<<n<<endl;
        else cout<<n<<" "<<n-1<<endl;
    }
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
