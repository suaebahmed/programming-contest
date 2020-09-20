#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(ll i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
typedef long long ll;
#define ld long double

int main(){
    optimize();
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        vl v(n),lock(n),st;

        FOR(i,0,n-1) cin>>v[i];
        FOR(i,0,n-1) cin>>lock[i];
        FOR(i,0,n-1)
        {
            if(!lock[i])
            {
                st.push_back(v[i]);
            }

        }
        sort(st.rbegin(),st.rend());
        ll j=0;
        FOR(i,0,n-1)
        {
            if(lock[i]) cout<<v[i]<<" ";
            else
            {
                cout<<st[j]<<" ";
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}
