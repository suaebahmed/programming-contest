#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;

bool isPrime(int x)
{
    if(x == 1) return 0;
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}
/**
print all prime number in O(n*logN);
*/
int main()
{
    optimize();
    int n; cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i)) cout<<i<<" ";
    }
    return 0;
}
