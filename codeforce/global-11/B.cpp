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
const int mx=2e4+5;

bool cmp(pii a,pii b)
{
    if(a.ss<b.ss) return 1;
    return 0;
}
void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vi v;
    v.pb(0);
    For(i,n)
    {
        if(s[i]=='W') v.pb(i+1);
    }
    v.pb(n+1);
    vector<pii> arr;
    int m=v.size();
    for(int i=2; i<m-1; i++)
    {
        int x=v[i]-v[i-1]-1;
        if(x!=0) arr.pb({v[i-1],x});
    }
    sort(all(arr),cmp);

    //for(auto x:arr) cout<<x.ff<<" "<<x.ss<<endl;
    m=arr.size();
    for(int i=0; i<m; i++)
    {
        int x,y;
        x=arr[i].ff;
        y=arr[i].ff+arr[i].ss;
        for(int j=x; j<y && k>0; j++)
        {
            s[j]='W';
            k--;
        }
    }
    for(int i=s.find_last_of('W')+1; i<n; i++)
    {
        if(s[i]=='L' && k>0)
        {
            s[i]='W';
            k--;
        }
    }
    for(int i=s.find_first_of('W')-1; i>=0; i--)
    {
        if(s[i]=='L' && k>0)
        {
            s[i]='W';
            k--;
        }
    }
    int ans=0;
    if(s[0]=='W') ans+=1;
    for(int i=1; i<n; i++)
    {
        if(s[i-1]=='W' && s[i]=='W') ans+=2;
        else if(s[i]=='W') ans+=1;
    }
    cout<<ans<<endl;
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
