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
    void moveZeroes(vector<int>& nums,int n)
    {
        for(int i=0,next = 0; i<n; i++)
        {
            if(nums[i])
            {
                swap(nums[i],nums[next]);
                next++;
            }
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
        vector<int> v={0,1,0,3,12};
        int n = v.size();

        Solution s1;
        s1.moveZeroes(v,n);
        FOR(i,0,n-1) cout<<v[i]<<" ";
    }
    return 0;
}
