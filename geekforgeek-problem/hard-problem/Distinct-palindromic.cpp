#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
int a[10];
set<string> st;

bool isPalindome(string s,int n)
{
    int ptr1 = 0, ptr2 = n-1;
    for(; ptr1<ptr2; ptr1++)
    {
        if(s[ptr1] != s[ptr2]){
            return false;
        }
        ptr2--;
    }
    return true;
}

void printArray(string s,int k,int n)
{
    string r;
    for(int i=k; i<=n; i++)
    {
        r += s[i];
    }
    int m = r.length();
    if(isPalindome(r,m)){
        st.insert(r);
    }
}

int main(){
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                //cout<<s.substr(j)<<" "<<endl;
                printArray(s,i,j);
            }
        }
        for(auto v: st) cout<<v<<endl;
        st.clear();
    }
    return 0;
}
