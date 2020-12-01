#include<bits/stdc++.h>

#pragma GCC optimize("O2")

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;
const int mx = 1e7+1;

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
void generate_prime(int n)
{
    for(int i=1; i<n; i++)
    {
        if(isPrime[i]) cout<<i<<" ";
    }
}

int main()
{
    clock_t start, end;
    start = clock();
    sieve();
    end = clock();
    double time_taken = double(end - start)/double(CLOCKS_PER_SEC);
    cout <<"Execution time: " <<time_taken<< " secs.";

    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        generate_prime(n);
        cout<<endl; /// it use must
    }
    return 0;
}
