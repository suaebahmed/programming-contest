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
    int n; cin>>n;
    string s; cin>>s;

    string t(10,'0');
    for(int i=0; i<n; i++)
    {
        int l=0,r=9;
        if(s[i]=='L')
        {
            while(t[l]!='0') l++;
            t[l]='1';
        }
        else if(s[i]=='R')
        {
            while(t[r]!='0') r--;
            t[r]='1';
        }
        else
        {
            int x=(int)(s[i]-'0');
            t[x]='0';
        }
    }
    cout<<t<<endl;
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
