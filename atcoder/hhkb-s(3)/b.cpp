#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
typedef long long ll;

void solve()
{
    int n,m; cin>>n>>m;
    char a[105][105];
    For(i,n)
    {
        For(j,m)
        {
            cin>>a[i][j];
        }
    }

    int cnt=0;
    //row dir
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(a[i][j]=='.' && a[i][j-1]=='.') cnt++;
        }
    }
    //col dic
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='.' && a[i-1][j]=='.') cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    optimize();
    solve();
    return 0;
}
