#include<stdio.h>
int main()
{
    int i,x;
    char ch1[1000];
    gets(ch1);
    int len=strlen(ch1);
    int p,l;
    scanf("%d %d",&p,&l);
    x=p+l-1;
    for(i=p-1;i<len-1;i++)
    {
        ch1[i]=ch1[x];
        x++;
        if(x<=len) ch1[i]=='\0';
    }
    printf("%s",ch1);
}
