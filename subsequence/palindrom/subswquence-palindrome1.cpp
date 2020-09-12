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
        bool flag3 = 0;
        unordered_map<int,int> cnt,track;

        FOR(i,0,n-1)
        {
            cin>>v[i];
            cnt[v[i]]++;
            if(cnt[v[i]] >= 3) flag3 = 1;
        }
        if(flag3)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(track[v[i]]== 0)
            {
                track[v[i]] = 1;
            }
            else if(track[v[i]] == 2)
            {
                track[v[i]] = 3;
            }

            if(i>0)
            {
                for(auto &vl: track)
                {
                    if(vl.ff != v[i] && vl.ss != 3)
                    {
                        vl.ss = 2;
                    }
                }
            }
        }
        for(auto &vl: track)
        {
            if(vl.ss >= 3)
            {
                flag3 = 1;
            }
        }

        if(flag3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
