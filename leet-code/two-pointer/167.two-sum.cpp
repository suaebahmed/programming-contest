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
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0,end = n-1,sum = 0;
        vector<int> v(2);

        while(start<end)
        {
            sum = arr[start]+arr[end];
            if(sum == target)
            {
                v[0] = start+1;
                v[1] = end+1;
                break;
            }
            else if(sum < target) start++;
            else end--;
        }
        return v;
    }
};

int main(){
    optimize();
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n),result;
        FOR(i,0,n-1) cin>>v[i];
        int target;
        cin>>target;
        Solution s1;
        result=s1.twoSum(v,target);
        FOR(i,0,1) cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
