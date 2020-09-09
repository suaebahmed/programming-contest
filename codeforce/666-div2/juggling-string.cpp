#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;

int main(){
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[26]={0};
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            for(auto c: s) a[s[j]-'a']++;
        }

        bool all_equal = true;
        FOR(j,0,25)
        {
            if(a[j]%n != 0)
            {
                all_equal = false;
            }
        }
        if(all_equal) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
