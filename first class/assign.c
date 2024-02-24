#include<stdio.h>

float main(){
    printf("Table/n");

    int Choice;
    float a,b;
    float result;
    printf("Enter Your First Number: ");
    scanf("%f", &a);

    printf("Enter Your Second Number: ");
    scanf("%f", &b);
    printf("choice/n");
    printf("1.Addition/n 2.Subtraction/n 3.Multiplication/n");
    scanf("%d", &Choice);


    switch (Choice)
    {
        case 1:
        result = a + b;
        printf("The sum of %f and %f is %f/n", a, b, result);
        break;
    case 2:
        result = a - b;
        printf("The subtraction of %f and %f is %f/n", a, b, result);
        break;
    case 3:
        result = a * b;
        printf("The multiplication of %f and %f is %f/n", a, b, result);
        break;
    default:
        printf("Invalid choice/n");
        break;
    
    }


    return 0;
}