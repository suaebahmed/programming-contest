#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
const int MAXN = 50;
int a[MAXN];

int main(){

    int n;
    cin>>n;
    ll m = 1000000007;
    ll res = 0;
    vector<ll> v(n);

    FOR(i,0,n-1)
    {
        cin>>v[i];
    }
    FOR(i,0,n-2)
    {
        res += v[i]*v[i+1];
    }
    cout<<res%m<<endl;
    return 0;
}
