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
typedef long long ll;
#define ld long double
#define mod 1000000007
const int mx=1100000;
string alph("abcdefghijklmnopqrstuvwxyz"),s,t;
int n, cnt, ans, a, b, c, tmp, m, x, y, sum, k;
//1203/problem/D2

void solve()
{
    cin>>s>>t;
    n=sz(s),m=sz(t);
    vector<int> a(m+2),b(m+2);
    for(int i=0,j=0; i<n&&j<m; i++)
    {
        if(s[i]==t[j]) a[j++]=i;
    }
    for(int i=n-1,j=m-1; i>=0&&j>=0; i--)
    {
        if(s[i]==t[j]) b[j--]=i;
    }
    //for(auto x: a) cout<<x<<" ";
    ans=max(b[0],n-a[m-1]-1);

    for(int i=1; i<m; i++) ans=max(ans,b[i]-a[i-1]-1);
    cout<<ans<<endl;
}

int main(){
    optimize();
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
