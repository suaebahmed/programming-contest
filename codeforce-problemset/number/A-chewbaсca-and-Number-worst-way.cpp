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
typedef long long ll;
#define ld long double

void solve()
{
    ll n,tm,m,x,l,t;
    cin>>n;
    tm=n,x=1;
    while(tm)
    {
        tm/=10;
        x=x*10;
    }
    x/=10;
    tm=n;
    ll sum=0;
    while(x>1)
    {
        l=n/x;//--now we found each first digit
        n=n%x;
        t=9-l;
        if(t==0 && sum==0) sum=sum*10+l;
        else if(t<l) sum=sum*10+t;
        else sum=sum*10+l;
        x/=10;
    }
    l=tm%10;
    t=9-l;
    if(t==0 && sum==0) sum=sum*10+l;
    else if(t<l) sum=sum*10+t;
    else sum=sum*10+l;

    cout<<sum<<endl;
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
