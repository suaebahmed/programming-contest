#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const int N=2e6+1;
int n,i;
ll a[N];

int main()
{
    ll t,d;
    cin>>t>>d;
    ll ans = 0;
    for(int i=1; i<=t; i++){
        ll x,y;
        cin>>x>>y;
        if(x*x+y*y<=d*d) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
