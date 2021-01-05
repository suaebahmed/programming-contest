#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;

bool isPrime(int n)
{
    if(n == 1) return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool isP=isPrime(n);
        if(isP) cout<<"Yes prime number"<<endl;
        else cout<<"No prime number"<<endl;
    }
    return 0;
}
