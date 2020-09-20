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
#define pb push_back
typedef long long ll;
#define ld long double


int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int n = s.length();
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
