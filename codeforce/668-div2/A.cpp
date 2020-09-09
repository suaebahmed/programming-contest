#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
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
        FOR(i,0,n-1) cin>>v[i];
        if(n%2 == 0)
        {
            for(int i=0; i<n; i+=2)
                swap(v[i],v[i+1]);

            FOR(i,0,n-1) cout<<v[i]<<" ";
        }
        else
        {
            for(int i=n-1; i>=0; i--)
            {
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
