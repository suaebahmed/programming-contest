#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        int x=s[i]-'0';
        if(i==0 && x==9)
            cout << 9;
        else if(9-x < x)
            cout << 9-x;
        else
            cout << x;
    }
    cout << endl;
    return 0;
}
