#include<stdio.h>
#include<string.h>
int main()
{
    char aa[100],bb[100];
    int i,la,lb,p,k=0,j=0;
    printf("Insert a string\n");
    gets(aa);
    la=strlen(aa);
    printf("Insert a string to delete\n");
    gets(bb);
    printf("After delete:\n");
    for(i=0; i<la; i++)
    {
        if(aa[i]==bb[k])
        {
            aa[i]='\0';
            k++;
        }
        else
        {
            printf("%c",aa[i]);
        }
    }

}
