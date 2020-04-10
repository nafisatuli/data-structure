#include<stdio.h>
int main()
{
    int p,l,i,x,len1,len2;
    char ch1[1000],ch2[1000];
    gets(ch1);
    gets(ch2);
    len1=strlen(ch1);
    len2=strlen(ch2);
    scanf("%d",&p);
    x=len1-1;
    for(i=len1+len2-1;i>=p+len2;i--)
    {
        ch1[i]=ch1[x];
        x--;
    }
    int j=0;
    for(i=p;i<p+len2;i++)
     {
         ch1[i]=ch2[j];
         j++;
     }
     for(i=0;i<len1+len2;i++)
    {
         printf("%c",ch1[i]);
    }
}


