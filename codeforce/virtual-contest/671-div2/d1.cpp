#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007

void solve()
{
    int n; cin>>n;
    vector<int> v;
    For(i,n) cin>>v[i];

    sort(all(v));
    int x=(n-1)/2,j=0;

    cout<<x<<"\n";
    for(int i=x; i<n; i++)
    {
        cout<<v[i]<<" ";
        if(x-- && x>-1)
        {
            cout<<v[j]<<" ";
            j++;
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
