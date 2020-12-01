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
string alph("abcdefghijklmnopqrstuvwxyz"),s,t;
ll n, cnt, ans, a, b, c, tmp, m, x, y, sum, k;

void solve()
{
    cin>>n>>m;
    vector<vector<int>> a(n),r(m),b(m),c;

    For(i,n)
    {
        vector<int> v(m);
        For(j,m) cin>>v[j];
        a[i]=v;
    }
    For(i,m)
    {
        vector<int> v(n);
        For(j,n) cin>>v[j];
        b[i]=v;
    }
    c=b;
    int k=0;
    for(int j=0; j<m; j++) // a[0][j]
    {
        for(int i=0; i<m; i++)
        {
            sort(all(c[i]));
            bool p=binary_search(all(c[i]),a[0][j]);
            if(p)
            {
                r[k]=b[i];
                k++;
            }
        }
    }
    //output
    For(i,n)
    {
        For(j,m) cout<<r[j][i]<<" ";
        cout<<endl;
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
