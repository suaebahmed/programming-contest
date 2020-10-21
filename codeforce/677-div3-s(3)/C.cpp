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
    vi v(n);
    scanArr(v);
    int x=*max_element(all(v));

    if(x==v[0] && v[0]>v[1])
    {
        cout<<1<<endl;
        return;
    }
    for(int i=1; i<n-1; i++)
    {
        if((x==v[i] && v[i]>v[i-1]) || (x==v[i] && v[i]>v[i+1]))
        {
            cout<<i+1<<endl;
            return;
        }
    }
    if(x==v[n-1] && v[n-1]>v[n-2])
    {
        cout<<n<<endl;
        return;
    }
    cout<<-1<<endl;
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
