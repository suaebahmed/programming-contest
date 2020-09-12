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
        vector<int> v(n); // right and left position
        unordered_map<int,int> right_pos,left_pos;
        FOR(i,0,n-1)
        {
            int x;
            cin>>x;
            v[i] = x;
            if(left_pos[x] == 0) left_pos[x] = i+1;
            right_pos[x] = i+1;
        }
        bool ff = 0;
        FOR(i,0,n-1)
        {
            if(right_pos[v[i]]-left_pos[v[i]] >= 2)
                ff = 1;
        }
        if(ff) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
