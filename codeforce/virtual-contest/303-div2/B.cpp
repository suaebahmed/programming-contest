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
    string s,t,p;
    cin>>s>>t;
    int n=s.length(),distance=0;
    For(i,n) if(s[i]!=t[i]) distance++;

    if(distance%2) cout<<"impossible"<<endl;
    else
    {
        int j=1;
        For(i,n)
        {
            if(s[i]!=t[i] && j%2)
            {
                j++;
                p += s[i];
            }
            else if(s[i]!=t[i] && j%2==0)
            {
                j++;
                p += t[i];
            }
            else p += s[i];
        }
        cout<<p<<endl;
    }
}

int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
