#include<stdio.h>
void length(char aa[])
{
    int i=0;
    while(aa[i]!=0)
    i++;
    printf("%d\n",i);
}
int main()
{
    char aa[11000];
    gets(aa);
    length(aa);
}
