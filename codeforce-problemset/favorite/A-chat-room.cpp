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

    char checked[] = "hello";
    int k = 0;

    for(int i=0; i<len; i++)
    {
        if(s[i] == checked[k])
        {
            a[k] = 1;
            k++;
            if(k == 5) break;
        }
    }
    /// printf(i==5?"YES":"NO");

    FOR(j,0,4)
    {
        if(!a[j]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
