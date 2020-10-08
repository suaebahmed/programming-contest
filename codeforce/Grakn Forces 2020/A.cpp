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
class tip
{
public:
    int a,b,c;
    tip()
    {
        a=b=c=0;
    }
};

void solve()
{
    int n; cin>>n;
    tip v[n];
    For(i,n) cin>>v[i].a;
    For(i,n) cin>>v[i].b;
    For(i,n) cin>>v[i].c;

    int frst=200,prv=200;
    bool ok=1;
    For(i,n-1)
    {
        if(v[i].a !=prv)
        {
            cout<<v[i].a<<" ";
            prv=v[i].a;
            if(ok)
            {
                frst=v[i].a;
                ok=0;
            }
        }
        else if(v[i].b !=prv)
        {
            cout<<v[i].b<<" ";
            prv=v[i].b;
        }
        else if(v[i].c !=prv)
        {
            cout<<v[i].c<<" ";
            prv=v[i].c;
        }
    }
    // --- last value
    if(v[n-1].a !=frst && v[n-1].a !=prv)
    {
        cout<<v[n-1].a<<"\n";
    }
    else if(v[n-1].b !=frst && v[n-1].b !=prv)
    {
        cout<<v[n-1].b<<"\n";
    }
    else if(v[n-1].c !=frst && v[n-1].c !=prv)
    {
        cout<<v[n-1].c<<"\n";
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
