#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
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
#define mod 1000000007

void solve()
{
    int n; cin>>n;
    vi arr,ng,po,ze;
    int ps=0,ngt=0;

    For(i,n)
    {
        int x; cin>>x;
        if(x>0) po.pb(x),ps+=x;
        else if(x<0) ng.pb(x),ngt+=x;
        else ze.pb(x);
    }
    sort(all(ng));
    sort(po.rbegin(),po.rend());

    if(ps>abs(ngt))
    {
        for(auto x: po) arr.pb(x);
        for(auto x: ng) arr.pb(x);
        for(auto x: ze) arr.pb(x);
    }
    else
    {
        for(auto x: ng) arr.pb(x);
        for(auto x: po) arr.pb(x);
        for(auto x: ze) arr.pb(x);
    }
    int psum=0;
    For(i,n)
    {
        psum+=arr[i];
        if(psum==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(auto y: arr) cout<<y<<" ";
    cout<<endl;
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
