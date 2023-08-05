#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[50];
    int i;
    int count=0;
    printf("Enter the string : ");
    scanf("%s", &string);

    for (i=0; i<strlen(string); i++)
    {
        if(string[i]>='a' && string[i]<='z')
        {
            count = count+1;
        }
    }
    printf("Number of smaller case letters are : %d", count);
    return 0;
}
