#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(s) s.size()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007
#define endl '\n'
const int MXN=1000;
bool isPrime[MXN];
vector<int> prm;

void seive(){
    for(int i=0; i<MXN; i++) isPrime[i]=1;
    isPrime[0]=isPrime[1]=0;

    for(int i=2; i*i<=MXN; i++){
        if(isPrime[i])
            for(int j=i*i; j<MXN; j+=i){
                isPrime[j]=0;
            }
    }
    for(int i=2; i<MXN; i++){
        if(isPrime[i]) prm.pb(i);
    }
}
/*
    Problem: prime factors of LCM of array
    arr ={20, 10, 15, 60}
    output = 2 3 5
*/
void solve(){
    seive();
    int n; cin>>n;
    vector<int> v(n),fact(MXN,0);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++){
        int cpy=v[i];
        for(int j=0; prm[j]*prm[j]<=cpy; j++){
            if(cpy%prm[j]==0){
                while(cpy%prm[j]==0) cpy/=prm[j];
                fact[prm[j]]=1;
            }
        }
        if(cpy>1) fact[cpy]=1;
    }
    
    // find max element
    int mx=*max_element(all(v));
    for(int i=1; i<=mx; i++){
        if(fact[i]==1) cout<<i<<' ';
    }
}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tt=1; //cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}