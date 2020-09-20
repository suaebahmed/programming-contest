#include<bits/stdc++.h>

using namespace std;


int main()
{
    /// constraint given 100 length -- should be 101 array length declare
    char s[101];
    char t[101];
    scanf("%s",s);
    scanf("%s",t);

    int len1 = strlen(s);
    int len2 = strlen(t);

    int j = 0;
    bool flag = 1;

    if(len1 != len2){
        puts("NO");
        return 0;
    }

    for(int i=0; i<len1; i++)
    {
        if(t[len1-i-1] != s[i]){
            flag = 0;
            break;
        }
    }
    puts(flag?"YES":"NO");
    return 0;
}
