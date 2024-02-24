#include<stdio.h>

int main(){
    printf("USSD/n");

    printf("Choose your plan/n");
    printf("1. 300mb - N300./n 2. 75mb - N100./n 3. 1GB - N700/n");

    int choice;

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Successfully recharged 300mb - N300/n");
        break;
    case 2:
        printf("Successfully recharged 75mb - N100/n");
        break;
    case 3:
        printf("Successfully recharged 1Gb - N700/n");
        break;
    default:
        printf("Invalid choice/n");
        break;
    }
    return 0;
}