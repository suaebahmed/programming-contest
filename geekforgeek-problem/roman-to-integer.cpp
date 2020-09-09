#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
int a[101];
set<string> st;
vector<int> v;

void convert_to_roman(int n)
{
    vector<string> thousands = {"","M","MM","MMM"}; /// 3000
    vector<string> hundreds = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};///900
    vector<string> tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};/// 90
    vector<string> units = {"","I","II","III","IV","V","VI","VII","VIII","IX"};///9

    string ans =thousands[n/1000]+
                hundreds[(n%1000)/100]+
                tens[(n%100)/10]+
                units[n%10];
    cout<<ans<<endl;
}
void roman_to_int(string s)
{
    map<char,int> mp;
    mp.insert({'I',1});
    mp.insert({'V',5});
    mp.insert({'X',10});
    mp.insert({'L',50});
    mp.insert({'C',100});
    mp.insert({'D',500});
    mp.insert({'M',1000});

    int result = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(i>0 && mp[s[i]] > mp[s[i-1]])
        {
            result += mp[s[i]] - 2*mp[s[i-1]];
        }
        else
        {
            result += mp[s[i]];
        }
    }
    cout<<result<<endl;
}

int main(){
    optimize();
    int t=1;
    cin>>t;
    while(t--)
    {
        int type;
        cout<<"type 1 convert integer to roman :"<<endl;
        cout<<"type other convert integer to roman :"<<endl;
        cin>>type;
        if(type == 1)
        {
            int n;
            cout<<"input an integer number: "<<endl;
            cin>>n;
            convert_to_roman(n);
        }
        else
        {
            string s;
            cout<<"input an roman number: "<<endl;
            cin>>s;
            roman_to_int(s);
        }
    }
    return 0;
}
