#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
const int mx = 1e5+1;
int a[mx];

int minIndexChar(string str, string patt)
{
    unordered_map<char,int> mp;
    int strlen = str.length();
    FOR(i,0,strlen-1)
    {
        if(!mp[str[i]])
            mp[str[i]] = i+5;
    }
    int plen = patt.length();


    FOR(i,0,plen-1)
    {
        if(mp.count(patt[i]))
            a[i] = mp[patt[i]];
    }
    sort(a,a+plen);
    for(int i=0; i<plen; i++)
    {
        if(a[i] != 0)
            return (a[i]-5);
    }
    return -1;
}

int minIndexChar_solve(string str, string patt)
{
	unordered_map<char, int> um;
	int minIndex = INT_MAX;

	int m = str.size();
	int n = patt.size();

	for (int i = 0; i < m; i++)
		if (um.find(str[i]) == um.end())
                um[str[i]] = i;

	// traverse the string 'patt'
	for (int i = 0; i < n; i++)

		// if patt[i] is found in 'um', check if
		// it has the minimum index or not accordingly
		// update 'minIndex'
		if (um.find(patt[i]) != um.end() &&
			um[patt[i]] < minIndex)
			minIndex = um[patt[i]];

	if (minIndex != INT_MAX)
		return minIndex;
	else
		return -1;
}


int main() {
    optimize();
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    int ans = minIndexChar(str, patt);
	    cout<<"ans "<<ans<<endl;
	    if(ans == -1)cout<<"No character present";
	    else cout<<str[ans];
	    cout<<endl;
	}
	return 0;
}
