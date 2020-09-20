#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);
#define FOR(i,a,b) for(ll i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define MOD 1000000007
typedef long long ll;


int main(){
    optimize();
    int T=1;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int zero = 0,one = 0;
        FOR(i,0,n-1)
        {
            ll x;
            cin>>x;
            if(x==1) one++;
            else if(x==0)zero++;
        }
        if(zero >= one)
        {
            cout<<zero<<endl;
            for(int i=0; i<zero; i++)
            {
                cout<<"0 ";
            }
            cout<<"\n";
        }
        else
        {
            if(one%2)one--;
            cout<<one<<endl;
            for(int i=0; i<one; i++)
            {
                cout<<"1 ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
