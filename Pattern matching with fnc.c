#include <stdio.h>
#include <string.h>
void match(char text[],char pattern[])
{
    int i,c,d,e,text_length,pattern_length,p;
    for(i=0; text[i]!='\0'; i++)
        text_length++;
    for(i=0; pattern[i]!='\0'; i++)
        pattern_length++;
    if (pattern_length>text_length)
    {
        p = -1;
    }
    for (c=0; c<=text_length-pattern_length; c++)
    {
        p=e=c;
        for (d=0; d<pattern_length; d++)
        {
            if(pattern[d]==text[e])
            {
                e++;
            }
            else
            {
                break;
            }
        }
        if (d==pattern_length)
        {
             p=1;
        }
    }
    p= -1;
    if(p == 1)
    {
        printf("Found at location %d", p+1);
    }
    else if(p == -1)
    {
        printf("Not found.");
    }
}
int main()
{
    char text[10000],pattern[10000];
    int p;
    gets(text);
    gets(pattern);
    p=match(text,pattern);
    return 0;
}
