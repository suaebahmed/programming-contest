#include<bits/stdc++.h>

using namespace std;
#define FOR(i,b,n) for(int i=b; i<n; i++)
#define all(v) (v).begin(),(v).end()

void ToLower(char s[])
{
    while(*s != '0')
    {
        if(*s>='A' && *s<='Z')
        {
            int x = *s - 'A';
            *s = 'a'+x;
        }
        s++;
    }
}

int main()
{
    char s[101];
    char x[101];
    scanf("%s",s);
    //printf("%c",tolower(s[0]));

    int len = strlen(s);
    int j = 0;

    for(int i=0; i<len; i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            x[j] = '.'; j++;
            x[j] = s[i]; j++;
        }
    }
    x[j] = '\0';
    puts(x);

    return 0;
}
/*

int main(){
char string[100];
int i;
scanf("%s",string);
for(i=0;i<strlen(string);i++)
    if(!strchr("AEIOUYyaeiou",string[i]))
        printf(".%c",tolower(string[i]));
}
