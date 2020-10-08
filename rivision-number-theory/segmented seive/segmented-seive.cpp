#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;
const int mx = 1e6+1;

bool isPrime[mx];

void sieve()
{
    for(int i=0; i<mx; i++) isPrime[i] = 1;
    isPrime[0] = isPrime[1] = 0;

    for(int i=2; i*i<mx; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<mx; j+=i)
                isPrime[j] = 0;
        }
    }
}
void segmentedSieve(ll a,ll b)
{
    sieve();
    // creating one more array of size=b-a
    bool arr[b-a+1];
    memset(arr,1,sizeof(arr));
    for(ll i=2; i*i<=b; i++)  //sqrt(b);
    {
        if(isPrime[i])
        {
            for(ll j=a; j<=b; j++)
            {
                //multiple check in array a to b
                if(i!=j && j%i==0) arr[j-a]=0;
            }
        }
    }
    /// output
    for(ll i=a; i<=b; i++) cout<<arr[i-a]<<" ";
}

int main()
{
    optimize();
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b; //25 36
        segmentedSieve(a,b);
    }
    return 0;
}
