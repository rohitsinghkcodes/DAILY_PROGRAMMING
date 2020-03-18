#include<stdio.h>
#include<string.h>

void main()
{
    int length = 0;
    char s[500];
    printf("Enter the string");
    gets(s);
    length = strlen(s);
    for(int i=0;i<length;i++)
    {
        if((s[i] == (int)NULL )||(s[i] == ''))
        {
            printf("\n");
        }
        else
        {
            printf("%d",s[i]);
        }
        
        //getch();
    }

}