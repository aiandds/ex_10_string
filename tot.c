#include<stdio.h>
#include<string.h>

int totalnowords(char ap[]);

int main()
{
int ch;
int wd;
char *ap;
printf("Enter the sentence:-\n");
gets(ap);

wd=totalnowords(ap);

printf("Total no of words in the sentence is %d\n",wd);

return 0;

}

int totalnowords(char ap[])
{
    int cnt=0,i=0;
    for (i = 0;ap[i] != '\0';i++)
        {
            if ((ap[i] == ' ' || ap[i]=='\t')  &&  (ap[i+1] != ' '))
                cnt++;
        }
    return cnt+1;
}
