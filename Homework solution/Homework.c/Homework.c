#include <stdio.h>

#include <stdlib.h>

#include <stdint.h>

#define ARRAY_LEN 64
int main() {
    char num, array[ARRAY_LEN];
    int k = 0;
    while (
        (num = getchar()) != EOF &&
        num != '\n' &&
        num != '\0') {
        switch (num) {
        case '-':
            if (k == 0) {
                array[k] = num;
            }
            else {
                printf("\nInput error");
                exit(-1);
            }
            break;

        case ' ':
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
            k++;
            break;

        case '|':
            array[k] = '.';
            k++;
            break;

        default:
            printf("\nInput error");
            exit(-1);
        }

        if (k >= ARRAY_LEN) {
            printf("\nInput error");
            exit(-1);
        }
    }
    array[k] = '\0';
    printf("%s", array);
    exit(0);
}