#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define FORJ(j,a,b) for(int j=a; j<= b; ++j)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
const int MAXN = 26;
int a[MAXN];

int main(){
    string s;
    cin>>s;
    int len = s.length();

    /// i did not read the full problem statement
    /// so 2 times answer was worng

    FOR(i,0,len-1)
    {
        if(s[i] =='4' || s[i] == '7') a[0]++;
    }
    if(a[0]==4 || a[0]==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
