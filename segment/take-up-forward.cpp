#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define read(v) for (auto &it : v) cin >> it;
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
#define lowb(a, x) (lower_bound((a).begin(),(a).end(),(x))-(a).begin())
#define uppb(a, x) (upper_bound((a).begin(),(a).end(),(x))-(a).begin())
typedef long long ll;
#define ld long double
#define mod 1000000007
#define endl '\n'
const int MAXN=2*1e5;
int a[MAXN],seg[4*MAXN];

void build(int ind,int low,int high){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=max(seg[2*ind+1],seg[2*ind+2]); //
}

int query(int ind,int low,int high,int l,int r){
    if(low>=l && high<=r){ // full have
        return seg[ind];
    }
    if(high<l || low>r) return INT_MIN; //non have
    //overlap
    int mid=(low+high)/2;
    int left=query(2*ind+1,low,mid,       l,r);
    int right=query(2*ind+2,mid+1,high,   l,r);
    return max(left,right);
}
/*
    ***problem: find max element in the given [l,r] segment
*/
void solve(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(0,0,n-1);
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(0,0,n-1,l,r)<<" ";
    }
}

int main(){
    optimize();
    int tt=1;
    // scanf("%d",&tt);
    // cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}