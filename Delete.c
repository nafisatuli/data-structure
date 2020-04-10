#include <stdio.h>
#include <string.h>
void Delete(char s[],int n, int p)
{
    printf("After delete:\n");
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
    printf("Input a string\n");
    gets(s);
    printf("Input position\n");
    scanf("%d",&p);
    printf("Input length\n");
    scanf("%d",&n);
    Delete(s,n,p);
    return 0;
}
