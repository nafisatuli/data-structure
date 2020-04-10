#include<stdio.h>
#include<string.h>
int main()
{
    char aa[100];
    int l;
    printf("Input a string\n");
    gets(aa);
    l=length(aa);
}
void length (char aa[])
{
    int a,b,i;
    printf("Enter the position and length of substring\n");
    scanf("%d %d",&a,&b);
    for(i=a; i<a+b+1; i++)
    {
        printf("%c",aa[i]);
    }

}
