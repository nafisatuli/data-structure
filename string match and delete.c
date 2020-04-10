#include<stdio.h>
int main()
{
    int i,j,x,y,t,q,z,p;
    char ch1[1000],ch2[1000],ch3[1000];
    gets(ch1);
    gets(ch2);
    int len1,len2,len3;
    len1=strlen(ch1);
    len2=strlen(ch2);
    x=0,y=0;
    for(i=0; i<=len1-len2; i++)
    {
        for(j=0; j<len2; j++)
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
        for(i=p; i<len1; i++)
        {
            ch1[i]=ch1[x];
            x++;
            if(x<=len1) ch1[i]=='\0';
        }
        for(i=0; i<strlen(ch1); i++)
        {
            printf("%c",ch1[i]);
        }
        printf("\n");
    }
}
