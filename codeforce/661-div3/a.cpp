#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


string removeArr(vector<int> v,int n)
{
    if(n == 1) return "YES";
    vector<int> a;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            if(abs(v[i]-v[j]) <= 1)
            {
                if(v[i] > v[j])
                {
                    //v.erase(v.begin()+j);
                    a.push_back(v[j]);
                    i++;
                }
                else{
                    //v.erase(v.begin()+i);
                    a.push_back(v[i]);
                    i++;
                }
            }

        }
    }
    int x = a.size();

    if((n-x) == 1) return "YES";
    else return "NO";
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        cout<<removeArr(v,n)<<endl;
    }
    return 0;
}
