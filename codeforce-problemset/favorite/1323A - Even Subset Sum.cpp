#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define all(v) (v).begin(), (v).end()
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

void solve()
{
    int n; cin>>n;
    int isEven=0;
    int j=0,atleast2odd[101]={0};

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        if(x%2==0) isEven=i+1;
        else
        {
            atleast2odd[j]=i+1;
            j++;
        }
    }
    if(isEven) cout<<1<<"\n"<<isEven<<endl;
    else if(atleast2odd[0] && atleast2odd[1])
        cout<<2<<"\n"<<atleast2odd[0]<<" "<<atleast2odd[1]<<endl;
    else cout<<-1<<endl;
}

int main(){
    optimize();
    ll T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
