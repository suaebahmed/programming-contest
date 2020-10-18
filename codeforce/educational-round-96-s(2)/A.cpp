#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007
const int mx=2e4+5;

void solve()
{
    int n; cin>>n;
    int a3=0,a5=0,a7=0;
    if(n%3==0)
    {
        a3+=n/3;
        cout<<a3<<" "<<a5<<" "<<a7<<endl;
        return;
    }
    else if(n%5==0)
    {
        a5+=n/5;
        cout<<a3<<" "<<a5<<" "<<a7<<endl;
        return;
    }
    else if(n%7==0)
    {
        a7+=n/7;
        cout<<a3<<" "<<a5<<" "<<a7<<endl;
        return;
    }
    ///3
    int x=n;
    x-=3;
    if(x%5==0 && x>0)
    {
        a5+=x/5;
        cout<<a3+1<<" "<<a5<<" "<<a7<<endl;
        return;
    }
    else if(x%7==0 && x>0)
    {
        a7+=x/7;
        cout<<a3+1<<" "<<a5<<" "<<a7<<endl;
        return;
    }
    ///5
    x=n;
    x-=5;
    if(x%3==0 && x>0)
    {
        a3+=x/3;
        cout<<a3<<" "<<a5+1<<" "<<a7<<endl;
        return;
    }
    else if(x%7==0 && x>0)
    {
        a7+=x/7;
        cout<<a3<<" "<<a5+1<<" "<<a7<<endl;
        return;
    }
    ///7
    x=n;
    x-=7;
    if(x%3==0 && x>0)
    {
        a3+=x/3;
        cout<<a3<<" "<<a5<<" "<<a7+1<<endl;
        return;
    }
    else if(x%5==0 && x>0)
    {
        a5+=x/5;
        cout<<a3<<" "<<a5<<" "<<a7+1<<endl;
        return;
    }
    cout<<-1<<endl;
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
