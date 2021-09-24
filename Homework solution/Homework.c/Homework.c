#include <stdio.h>


int main()
{
    char num;
    while (
        (num = getchar()) != EOF &&
        num != '\n' &&
        num != '\0')
    {
        switch (num)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("%c", num);
            break;
        case '|':
            printf(".");
            break;
        default:
            printf("\n error \n");
            exit(-1);
        }
    }
    printf("\n");
    exit(0);
}
