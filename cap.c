#include<stdio.h>
#include<string.h>
#include<ctype.h>

int cap(char str[]);
int n;
int main()
{

    char *ap;
    printf("Enter the sentence:-\n");
    gets(ap);

    n = strlen(ap);

    printf("\nThe Capitalized sentence: \n\n");
    cap(ap);

    printf("\n");
    return 0;
}

int cap(char str[])
{
    for(int i=0; i < n; i++)
    {
        if(isalpha(str[i]) && str[i-1]==' ')
        {
        str[i]=toupper(str[i]);
        }
        
        if(isalpha(str[0]))str[0]=toupper(str[0]);
    }
    
    printf("%s\n",str);
    
    return 0;
}

