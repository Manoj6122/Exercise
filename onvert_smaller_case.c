#include <stdio.h>

int main()
{
    int num;
    printf("Enter the string length : ");
    scanf("%d", &num);
    char string[num];
    printf("Enter the string : ");
    scanf("%s", &string);

    for (int i=0; i<num; i++)
    {
        if(string[i]>='A' && string[i]<='Z')
        {
            string[i] = string[i] + 32; //ASCII value
        }
    }
    printf("New string is : %s", string);
    return 0;
}
