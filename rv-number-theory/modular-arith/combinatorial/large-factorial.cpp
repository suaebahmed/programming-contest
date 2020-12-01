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
    int a,b; cin>>a>>b;
    int carry=0;
    string s=to_string(b);
    //for
    for(int i=s.length()-1; i>=0; i--)
    {
        int result=(s[i]-'0')*a+carry;
        int x=result%10;
        s[i]='0'+x;
        carry = result/10;
    }
    string t=to_string(carry);
    s=t+s;
    cout<<s<<endl;
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
