#include <stdio.h>
#include <string.h>
void DELETE(char s[],int n, int p)
{
    if ((n+p-1) <= strlen(s))
    {
        strcpy(&s[p-1],&s[n+p-1]);
        puts(s);
    }
}
int main()
{
    char s[10000];
    int n,p;
    gets(s);
    scanf("%d",&p);
    scanf("%d",&n);
    DELETE(s,n,p);
    return 0;
}
