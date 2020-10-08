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
#define mod 1000000007

void solve()
{
    int n,m; cin>>n>>m;
    vector<int> v[n];
    For(i,n)
    {
        for(int j=0; j<4; j++)
        {
            int x; cin>>x;
            v[i].pb(x);
        }
    }
    if(m%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        /// n==2
        if(n==1 && v[0][1]==v[0][2])
        {
            cout<<"YES"<<endl;
            return;
        }
        else if(n==1)
        {
            cout<<"NO"<<endl;
            return;
        }
        /// n>=2
        For(i,n)
        {
            if(v[i][0]==v[i][3] && v[i][1]==v[i][2])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        /// fail---
        bool found[2]={0};
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(v[i][0]==v[i][3] && v[i][0]==v[j][0] && v[i][0]==v[j][3]
                   && v[i][1]==v[j][2] && v[i][2]==v[j][1]) found[0]=1;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(v[i][0]==v[i][3]) found[1]=1;
        }
        if(found[0] && found[1])
        {
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
    }
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

/*
12 50
16 40
63 93
39 18
11 79
25 75
75 82
84 17
56 32
2 28
37 57
18 34
28 76
49 91
10 55
6 40
68 68
68 31
80 57
74 91
4 35
45 11
67 67
55 21
80 22
*/
