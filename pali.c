#include<stdio.h>
#include<string.h>

int main()
{
char str[50];
int len, rt = 0;

printf("Enter the Word :");
scanf("%s",str);

len = strlen(str);

for(int i = 0; i < len; i++)
{
    if(str[i]!=str[len-i-1])
    {
        printf("Not a Palindrome\n");
        return 0;
    }
    
}

    printf("Palindrome\n");

return 0;
}
