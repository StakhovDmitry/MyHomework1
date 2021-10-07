#include <stdio.h>


int main()
{
    char num, array[64];
    int k = 0;
    while (
        (num = getchar()) != EOF &&
        num != '\n' &&
        num != '\0')
    {
        switch (num)
        {
        case '-':
            if (k == 0)
            {
                array[k] = num;
            }
            else
            {
                printf("\n\n error \n\n");
                exit(-1);
            }
            break;
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
            array[k] = num;
            break;
        case '|':
            array[k] = '.';
            break;
        default:
            printf("\n error \n");
            exit(-1);
            k = k++;
        }
    }
    for (int i = 0; i <= 63; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");
    exit(0);
}

