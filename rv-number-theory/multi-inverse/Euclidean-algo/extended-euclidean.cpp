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
typedef long long int ll;
#define ld long double
#define mod 1000000007
const int mx=2e4+5;

int extended_gcd(int a,int b,int *x,int *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int gcd=extended_gcd(b%a,a,&x1,&y1);
    // update result
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}

void solve()
{
	int x, y, a = 56, b = 15;
    cout<<extended_gcd(a,b,&x,&y)<<endl;
    cout<<"x: "<<x<<" "<<" y: "<<y<<endl;
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
