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
#define mod 1000000007

void solve()
{
    int n,x; cin>>n;
    string s; cin>>s;
    int r_ev=0,r_od=0;
    int b_ev=0,b_od=0;

    for(int i=0; i<n; i++)
    {
        x=s[i]-'0';
        if(i%2==0)
        {
            if(x%2==0) r_ev++;
            else r_od++;
        }
        else
        {
            if(x%2==0) b_ev++;
            else b_od++;
        }
    }
    //---- main logic ---
    if(n==1)
    {
        if(x%2==1) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else if(n%2==0) // both have equal digit
    {
        if(b_ev>0) cout<<2<<endl;
        else cout<<1<<endl;
    }
    else // raze have more digit then breach
    {
        if(r_od>0) cout<<1<<endl;
        else cout<<2<<endl;
    }
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
