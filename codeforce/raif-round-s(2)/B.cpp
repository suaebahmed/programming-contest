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

bool s1(string s,int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='<')
        {
            return false;
        }
    }
    if(s[n-1]=='>' || s[n-1]=='-') return true;
    else return false;
}

bool s2(string s,int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='>')
        {
            return false;
        }
    }
    if(s[n-1]=='<' || s[n-1]=='-') return true;
    else return false;
}

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    // all room are returnable or not
    if(s1(s,n) || s2(s,n))
    {
        cout<<n<<endl;
        return;
    }
    // how many room returnable
    int ans=0;
    for(int i=1; i<n-1; i++)
    {
        if(s[i]=='-' || s[i-1]=='-') ans++;
    }
    if(s[0]=='-' || s[n-1]=='-') ans++;
    if(s[n-1]=='-' || s[n-2]=='-') ans++;
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
