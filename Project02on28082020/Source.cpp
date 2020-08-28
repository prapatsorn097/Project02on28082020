#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
    int i, j, num;
    printf("Enter number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}