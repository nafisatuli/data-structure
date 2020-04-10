#include <stdio.h>
#include <string.h>
int match(char text[],char pattern[])
{
    int i,c,d,e,text_length,pattern_length,position = -1;
    for(i=0;text[i]!='\0';i++)
        text_length++;
    for(i=0;pattern[i]!='\0';i++)
        pattern_length++;
    if (pattern_length>text_length)
    {
        return -1;
    }
    for (c=0;c<=text_length-pattern_length;c++)
    {
        position=e=c;
        for (d=0;d<pattern_length;d++)
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
          return position;
        }
    }
    return -1;
}
int main()
{
    char a[10000],b[10000];
    int position;
    gets(a);
    gets(b);
    position=match(a, b);
    if(position != -1)
    {
        printf("Found at location %d", position+1);
    }
    else
    {
        printf("Not found.");
    }
    return 0;
}
