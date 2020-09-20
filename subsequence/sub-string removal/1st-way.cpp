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
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        vector<ll> pq;

        for(int i=0; i<n; i++){
            if(s[i] == '1')
            {
                int j=i;
                while(j+1<n && s[j+1] == '1')
                    j++;
                pq.pb(j-i+1);
                i = j;
            }
        }
        ll cnt = 0;
        sort(pq.rbegin(),pq.rend());
        for(int i=0; i<pq.size(); i+=2)
            cnt += pq[i];
        cout<<cnt<<endl;
    }
    return 0;
}
