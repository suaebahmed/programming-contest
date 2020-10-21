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
const int mx=1100000;

void solve()
{
    int n; cin>>n;
    vi v(n,0),a(n);
    scanArr(a);
    vector<pii> res;

    int reads=n-1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(i!=j && a[i]!=a[j] && (v[i]==0 || v[j]==0))
            {
                res.pb({i+1,j+1});
                reads--;
                v[i]=v[j]=1;
            }
            if(reads<=0) break;
        }
        if(reads<=0) break;
    }
    if(res.size()!=n-1) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(auto x: res) cout<<x.ff<<" "<<x.ss<<endl;
    }
}

int main(){
    optimize();
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
