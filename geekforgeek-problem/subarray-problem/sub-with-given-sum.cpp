#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
const int mx = 1001;
int a[mx];
set<string> st;
vector<int> v;

int main(){
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int> v(n);
        FOR(i,0,n-1) cin>>v[i];

        int ptr1 = 0,ptr2 = 0,sum = v[ptr2];
        while(ptr2<n)
        {
            cout<<"sum: "<<sum<<endl;
            if(sum < k)
            {
                ptr2++;
                sum += v[ptr2];
            }
            else if(sum > k)
            {
                sum -= v[ptr1];
                ptr1++;
            }
            else break;
        }
        if(sum == k) cout<<ptr1+1<<" "<<ptr2+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
