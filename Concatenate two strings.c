#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int la,lb,i,j=0;
    gets(a);
    la=strlen(a);
    gets(b);
    lb=strlen(b);
    for(i=la; i<la+lb; i++)
    {
        a[i]=b[j];
        j++;
    }
    a[i]='\0';
    printf("%s",a);
}
