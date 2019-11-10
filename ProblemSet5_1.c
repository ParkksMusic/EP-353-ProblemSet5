#include <stdio.h>
int main()
{
    char Str[100];
    int i;

    printf("Enter String:\n");
    scanf("%s", Str);

    for (i = 0; Str[i] != '\0'; ++i);

    printf("Length of Str is %d", i);

    return 0;
}