#include<stdio.h>
#include<string.h>

int main()
{
    ///-- sliding windows --
    char s[101];
    scanf("%s",s);
    int len = strlen(s);
    int i=0;
    for(;i<len; i++)
    {
        if(!strchr("AEIOUYyaeiou",s[i]))
            printf(".%c",tolower(s[i]));
    }
    return 0;
}
