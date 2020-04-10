#include<stdio.h>
int main()
{
    int i,k=0,len1,len2;
    char aa[1000],bb[1000];
    gets(aa);
    gets(bb);
    len1=strlen(aa);
    len2=strlen(bb);
   for(i=len1;i<len1+len2;i++)
    {
        aa[i]=bb[k];
        k++;
    }
     for(i=0;i<len1+len2;i++)
    {
       printf("%c",aa[i]);
    }
}
