#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;

class Solution {
public:
    void reverseString(string &s,int n)
    {
        int end = s.length()-1;
        int start = 0;
        while(start < end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};

int main(){
    optimize();
    int t=1;
    //cin>>t;
    while(t--)
    {
        //int n;
        //cin>>n;
        string s("hello");
        int n = s.length();

        Solution s1;
        s1.reverseString(s,n);
        FOR(i,0,n-1) cout<<s[i]<<" ";
    }
    return 0;
}
