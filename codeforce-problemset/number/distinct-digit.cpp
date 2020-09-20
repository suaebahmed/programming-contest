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
/*
121 130       => 123
98766 100000  => -1
*/
string ito(int n)
{
    string s;
    while(n)
    {
        int l=n%10;
        s += (char)l+'0';
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

void solve()
{
    int r,l;
    cin>>r>>l;
    for(int i=r; i<=l; i++)
    {
        string s=ito(i);
        int c[10]={0};
        int n=s.length();

        bool fl=true;
        for(int j=0; j<n; j++)
        {
            if(c[s[j]-'0']==0);
            else fl=0;
            c[s[j]-'0']=1;
        }
        if(fl)
        {
            cout<<s<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
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
