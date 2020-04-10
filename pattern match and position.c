#include<stdio.h>
int main()
{
    int i,j,x,y,p[10000];
    char ch1[10000],ch2[10000];
    gets(ch1);
    gets(ch2);
    int len1,len2;
    len1=strlen(ch1);
    len2=strlen(ch2);
    x=0,y=0;
    for(i=0;i<=len1-len2;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(ch1[i+j]==ch2[j]) x++;

        }
        if(x==len2)
        {
           p[y]=i;
           y++;
        }
        x=0;
    }
    for(i=0;i<y;i++)
    {
        printf("string found in %d position\n",p[i]+1);
    }
}

