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

void solve()
{
    ll n; cin>>n;
    vl v(n);
    For(i,n) cin>>v[i];
    ll op=0,k;
    k=((n*(n-1))/2)-1;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                op++;
            }
        }
    }
    //cout<<op<<endl;
    deb(op);
    // 6 5 4 3 2 1
    //for(auto &x: v) cout<<x<<" ";
    //if(op<=k) cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
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
