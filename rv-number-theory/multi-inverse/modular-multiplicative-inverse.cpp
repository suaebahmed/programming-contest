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
ll gcdExtecded(ll a,ll b,ll *x,ll *y)
{

    return 1;
}

ll modInverse(ll a,ll m)
{
    ll x,y;
    ll g=gcdExtecded(a,m,&x,&y);
    if(g!=1) return -1;
    else return (x%m+m)%m;
}
// A naive method to find modular multiplicative inverse of 'a' under modulo 'm'
int modInverse1(int a, int m)
{
	a = a%m;
	for (int x=1; x<m; x++) if ((a*x) % m == 1) return x;
    return 0;
}
// ------  method 3 -------- Assumption: m is prime
ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);
}
ll fastExpo(ll a,ll b,ll m)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return res;
}
void modInverse3(int a, int m)
{
	int g = gcd(a, m);
	if (g != 1)
		cout << "Inverse doesn't exist\n";
	else
	{
		// If a and m are relatively prime, then modulo inverse
		// is a^(m-2) mode m
		cout << "Modular multiplicative inverse is "
			<<fastExpo(a, m-2, m)<<endl;
	}
}
ll bigmod(ll a,ll b,ll m)
{
    if(b==0) return 1;
    if(b&1) return ((ll)a%m*bigmod(a,b-1,m)%m);
    else
    {
        ll x=bigmod(a,b/2,m);
        return (x*x)%m;
    }
}
int main(){
    optimize();
    /// method 1  --> iterative solution
    ll a = 3, m = 11;
	//cout << modInverse1(a, m)<<endl;

    /// method 2 --> exteded_gcd
    //a=3,b=5,m=mod;
    //cout<<(a*modInverse2(b,m))%m;

    /// method 3 --> fermats's little theorem
    a = 3, m = 11;
	modInverse3(a, m);
    //recursive approch
    cout<<bigmod(a,m-2,m)<<endl;
    return 0;
}
