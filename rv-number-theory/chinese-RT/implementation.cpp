#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define m_p make_pair
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
#define ar array
const int MXN=56;

int inv(int a,int m){
    int m0=m,exm,q;
    int x0=0,x1=1,t;
    if(m==1) return 0;

    while(a>1){
        q=a/m;
        exm=m;
        m=a%m,a=exm;
        //find x1 and x0 
        t=x0;
        x0=x1-q*x0;
        x1=t;
    }
    if(x1<0) x1+=m0;
    return x1;
}

int findMinX(vector<int> num,vector<int> rem,int k){
    int prod=1;
    for(int i=0;i<k;i++) prod*=num[i];

    int result=0;
    for(int i=0; i<k; i++){
        int pp=prod/num[i];
        result+=rem[i]*inv(pp,num[i])*pp;
    }
    return result%prod;
}


void solve(){
    vector<int> num={3,4,5},rem={1,2,4};
    int k=3;
    cout<<findMinX(num,rem,k)<<endl;
}

int main(){
    optimize();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int tt=1; //cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}