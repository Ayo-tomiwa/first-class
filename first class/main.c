// header files
#include<stdio.h>

int main(){

    int a = 5;
    int b = 10;
    printf("%d/n", a + b);
    printf("%d/n", a * b);
    printf("%d/n", a - b);
    printf("%d/n", a / b); 

   int score = 10;
    if(score > 100) {
        printf("Invalid score");
    }
    else if(score >= 75 && score <= 100) {
        printf("You scored A");
    }
    else if(score >= 65 && score < 75) {
        printf("You scored B");
    }
    else if(score >= 55 && score < 65) {
        printf("You scored C");
    }
    else if(score >= 45 && score < 55) {
        printf("You scored D");
    }
    else if(score >= 35 && score < 45) {
        printf("You scored E");
    }
    else if(score < 35) {
        printf("You scored F");
    }

    // int a = 20;
    a > 100 ? printf("a is greater than 100") : printf("a is less than 100");


    return 0;
    


return 0;
/*create a and b then print the arithmetic*/


}
