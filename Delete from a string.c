#include<stdio.h>
#include<string.h>
int main()
{
    char aa[100];
    int i,p,l,c,len,k=0;
    gets(aa);
    len=strlen(aa);
    scanf("%d %d",&p,&l);
    for(i=p-1;i<len;i++)
    {
        aa[i]=aa[l];
        l++;
    }
    c=l+1;
    for(i=p;i<=c;i++)
    {
        aa[i]='\0';
    }
    printf("%d\n",strlen(aa));
    for(i=0;i<len;i++)
    {
        printf("%c",aa[i]);
    }
}
