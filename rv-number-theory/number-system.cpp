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
const int MXN=2*1e5;

string isOctal(int n){
    string s="";
    while(n>0){
        s=(char)(n%8+'0')+s;
        n/=8;
    }
    return s;
}

string binary(int n){
    string s="";
    while(n>0){
        s=(char)(n%2+'0')+s;
        n/=2;
    }
    return s;
}

string Hexa(int n){
    string s="";
    while(n>0){
        int r=n%16;
        if(r>9){
            r-=10;
            s=char(r+'A')+s;
        }
        else s=(char)(r+'0')+s;
        n/=16;
    }
    return s;
}

void solve(){
    int n; cin>>n;
    cout<<isOctal(n)<<endl;
    cout<<binary(n)<<endl;
    cout<<Hexa(n)<<endl;
}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tt=1; //cin>>tt;
    for(int i=1; i<=tt; i++){
        //cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}