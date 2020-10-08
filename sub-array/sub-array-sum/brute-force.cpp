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
    int a[]={3,-2,5,-1};
    int ans=INT_MIN,n=4,sub_arr_size=2;

    for(int i=0; i<n; i++)
    {
        int sum=0;
        if(i+sub_arr_size <= n)
            for(int j=i; j<sub_arr_size+i && j<n; j++)
            {
                sum += a[j];
            }
            ans = max(ans,sum);
    }
    cout<<ans<<endl;
}
// divide conquer


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
