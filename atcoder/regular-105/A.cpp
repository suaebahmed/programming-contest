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
const int mx=1e8+5;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b==c+d || a+c==b+d || a+d==b+c)
        cout<<"Yes";
    else if(a+b+c==d || a+b+d==c || a+c+d==b || b+c+d==a)
        cout<<"Yes";
    else cout<<"No";
}

int main(){
    optimize();
    solve();
    return 0;
}
