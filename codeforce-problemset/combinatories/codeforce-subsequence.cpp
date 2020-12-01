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
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
const int mx=2e5;
int n;

void solve()
{
    ll n;
    cin>>n;
    ll k=1;
    int i=0;
    vector<ll>a(10,1);
    // imagine array a is: 2 2 2 2 (abcd)
    // now make : 3 2 2 2
    while(k<n){
        ll curr=a[i%10];
        a[i%10]++;
        k=(k/curr)*a[i%10];
        i++;
    }
    string str="codeforces";
    for(int i=0;i<10;i++){
        for(int j=0;j<a[i];j++)
            cout<<str[i];
    }
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
