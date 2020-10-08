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

void solve()
{
    int n; cin>>n;
    int a[n+1]={0};

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                a[i+1]=1;
            }
            else if(x==2)
            {
                a[j+1]=1;
            }
            else if(x==3)
            {
                a[i+1]=1;
                a[j+1]=1;
            }
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++) if(!a[i]) ans++;
    if(ans == 0) cout<<ans<<endl;
    else
    {
        cout<<ans<<endl;
        for(int i=1; i<=n; i++)
        {
            if(!a[i]) cout<<i<<" ";
        }
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
