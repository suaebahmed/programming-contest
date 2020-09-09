#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>

typedef long long ll;

ll s(int n)
{
    if(n == 1) return 1;
    cout<<n<<"\n";
    return s(n-1)*4;
}

ll fact(int n)
{
    if(n<=1) return 1;
    return 4*fact(n-1);
}

ll fib(int n)
{
    if(n <= 1) return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        cout<<"sum: "<<s(n)<<endl;
        cout<<"factorial: "<<fact(n)<<endl;

        for(int i=0; i<=n; i++)
            cout<<fib(i)<<" ";
        cout<<endl;
    }
    return 0;
}
