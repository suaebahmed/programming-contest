#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
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
#define mod 1000000007
const int mx=2e4+5;

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    int a[mx]={0};
    For(i,n)
    {
        int x; cin>>x;
        a[x]++;
        v[i]=x;
    }
    int j=1;
    for(int i=mx-5; i>0; i--)
    {
        if(a[i])
        {
            int tmp=a[i];
            a[i]=j;
            j+=tmp;
        }
    }
    for(auto &x: v) cout<<a[x]<<" ";
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
