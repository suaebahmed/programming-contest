#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(ll i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define MOD 1000000007
typedef long long ll;

bool solve(vector<ll> v,ll i,ll n)
{
    for(int j=0; j<n; j++)
    {
        if(i!=j && v[i]%v[j] == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        FOR(i,0,n-1) cin>>v[i];

        for(int i=0; i<n; i++)
        {
            if(solve(v,i,n))
            {
                cout<<i<<endl;
                return 0;
            }
        }

    }
    return 0;
}
