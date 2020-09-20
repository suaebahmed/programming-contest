#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<n; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
typedef long long ll;
#define ld long double

void solve()
{
    ll n;
    cin>>n;
    vl v(n);
    For(i,n) cin>>v[i];

    ll _25 = 0,_50 = 0;
    For(i,n)
    {
        if(v[i]==25) _25++;
        else if(v[i]==50 && v[i]<=(_25+1)*25)
        {
            _25--;
            _50++;
        }           // ensure you have at least one 25 and 50
        else if(v[i]==100 && _25>=1 && _50>=1 && v[i]<=((_25+1)*25+_50*50))
        {
            _25--;
            _50--;
            // need not add 100
        }
        else if(v[i]==100 && v[i]<=(_25+1)*25)
        {
            _25-=3;
            // need not add 100
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
