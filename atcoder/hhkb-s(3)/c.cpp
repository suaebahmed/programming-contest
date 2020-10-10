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
    int n; cin>>n;
    vi v(n);
    For(i,n) cin>>v[i];

    int visit[200005]={0};
    int k=0;
    for(int i=0; i<n; i++)
    {
        visit[v[i]]=1;
        for(int j=k; j<200005; j++)
        {
            if(!visit[j])
            {
                cout<<j<<endl;
                k=j;
                break;
            }
        }
    }
}

int main(){
    optimize();
    solve();
    return 0;
}
