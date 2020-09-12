#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define MOD 1000000007
typedef long long ll;

int main(){
    optimize();
    ll T=1;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        vector<int> v(n);
        bool flag = 0;
        FOR(i,0,n-1) cin>>v[i];

        for(int i=0; i<n; i++)
        {
            for(int j=i+2; j<n; j++)
            {
                if(v[i] == v[j])
                   flag = true;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
