#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;

int main(){
    optimize();
    string s;
    cin>>s;
    map<string,int> mp;
    int len = s.length();

    FOR(i,1,len)
    {
        FOR(p,0,len-1)
        {
            string sub;
            FOR(j,p,i-1)
            {
                sub += s[j];
            }
            if(sub != "")
            {
                cout<<sub<<endl;
                mp[sub]++;
            }
        }
    }
    for(auto v: mp)
        cout<<v.first<<" "<<v.second<<endl;
    return 0;
}
