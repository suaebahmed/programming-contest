#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;
const int mx = 101;

ll binary_exponentiation(int b,int n)
{
    ll res = 1;
    while(n>0)
    {
        if(n%2==0)
            b*=b,n/=2;
        else
            res*=b,n--;
    }
    return res;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int b,n;
        cin>>b>>n;
        cout<<binary_exponentiation(b,n)<<endl;
    }
    return 0;
}
