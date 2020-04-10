#include<stdio.h>
#include<string.h>
int main()
{
    char aa[100];
    int l;
    gets(aa);
    l=length(aa);
    printf("Length=%d\n",l);
}
int length (char aa[])
{
    int i,j=0;
    for(i=0;aa[i]!='\0';i++)
    {
        j++;
    }
    return j;
}
