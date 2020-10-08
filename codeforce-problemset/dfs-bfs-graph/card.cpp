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
/**
    701A  -> Cards
*/
void solve()
{
    int n,m,plots=0;
    cin>>n;
    vi v(n);
    int visited[n]={0};
    For(i,n)
    {
        cin>>v[i];
        plots += v[i];
    }

    m=n/2;
    plots/=m;

    For(i,m)
    {
        int s=plots;
        For(j,n)
        {
            if(visited[j]==0 && s==plots)
            {
                visited[j]=1;
                s=v[j];
                cout<<j+1<<" ";
            }
            else if(visited[j]==0 && v[j]+s==plots)
            {
                visited[j]=1;
                cout<<j+1<<endl;
                break;
            }
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
