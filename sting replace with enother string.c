#include<stdio.h>
int main()
{
    int i,j,x,y,t,q,z,p;
    char ch1[10000],ch2[10000],ch3[10000];
    gets(ch1);
    gets(ch2);
    gets(ch3);
    int len1,len2,len3;
    len1=strlen(ch1);
    len2=strlen(ch2);
    len3=strlen(ch3);
    x=0,y=0;
    for(i=0;i<=len1-len2;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(ch1[i+j]==ch2[j]) x++;

        }
        if(x==len2)
        {
           y=i;
           break;
        }
        x=0;
    }
    if(y==0) printf("No change:%s\n",ch1);
    else
    {
         p=y;
     x=p+len2;
    for(i=p;i<len1;i++)
    {
        ch1[i]=ch1[x];
        x++;
        if(x<=len1) ch1[i]=='\0';
    }
    len1=strlen(ch1);
    p=y;
    x=len1-1;
    for(i=len1+len3-1;i>=p+len3;i--)
    {
        ch1[i]=ch1[x];
        x--;
    }
    j=0;
    for(i=p;i<p+len3;i++)
     {
         ch1[i]=ch3[j];
         j++;
     }
     for(i=0;i<len1+len3;i++)
    {
         printf("%c",ch1[i]);
    }
    }
     j=0,x=0,p=0,y=2;
}
